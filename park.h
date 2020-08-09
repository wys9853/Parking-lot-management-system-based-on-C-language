#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>			//"cls"
#include <string.h>				//strcmp, strcpy
#include <time.h>				// time_t 

#define Price     0.1			//每秒的单价 
#define MAX_STOP  5
#define MAX_PAVE  4    // 最大等候车辆数 = MAX_PAVE - 1  
					   //数组中还有一个空闲单元时，就认为这个队列已经满了
// 汽车信息的结构体 
typedef struct{
	int TimeIn;					// 进入停车场时间
	int TimeOut;				// 离开停车场时间
	char ct[50];
	char Lincense[10];			// 字符类型 车牌号
}Car;
// 停放车辆的栈 
typedef struct{
	Car Stop[MAX_STOP];			// 用来停放车辆的栈
	int top;					// 标记栈顶位置
}Stopping;
// 等候队列
typedef struct{
	Car Pave[MAX_PAVE];			// 便道上的队列 
	int count;					// 标记队列等候车辆个数 
	int front, rear;			// 标记队头和队尾 
}Pavement; 
// 用来让路的栈
typedef struct{
	Car Let[MAX_STOP];			// 用来让路的栈 
	int top;					// 标记栈顶位置 
}Buffer;						
// 用来让路的队列
typedef struct{					
	Car Wait[MAX_PAVE];			// 临时便道的队列
	int count;					// 标记队列等候车辆个数 
	int front, rear;			// 标记队头和队尾
}Waiting; 
// 声明每个全局变量/结构体 
Stopping s;
Pavement p;
Buffer   b;
Car      c;
Waiting  w;
char     C[10];

void Car_Come();				// 车辆进入函数 
void Car_Leave();				// 车辆离开函数
void Stop_To_Pave();			// 当停车场满时车辆驶入便道
void Stop_To_Buff();			// 有车辆驶出时车辆暂时驶入缓冲栈
void Leave_Pavement();			// 车辆离开便道（说明要出停车场的汽车在便道上）
void DisPlay();					// 展示停车场内的车辆位序
void DisPlayPave();				// 展示便道上的车辆位序
void Welcome();					// 显示菜单
void SmallWelcome();
void Car_Leave_menu();
void Search();


