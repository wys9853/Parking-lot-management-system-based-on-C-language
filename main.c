#include "park.c"

int main(){
	s.top = -1;
	b.top = 0;
	p.rear = 0;
	p.count = 0;
	p.front = 0;
	w.count = 0;
	w.front = 0;
	w.rear = 0;
	while(1){
		system("cls");						// 清屏 
		Welcome();							// 重新显示界面 
		int i, cho;
		scanf("%d", &i);
		if(1 == i)  DisPlay();
		if(2 == i)  DisPlayPave();
		if(3 == i)  Car_Come();
		if(4 == i)  Car_Leave_menu();			//汽车离去：停车场内和便道上 
		if(5 == i)  Search();
		if(6 == i)  {
						printf("\n欢迎您再次使用本系统\n\n");
						break;
					} 
		printf("\n返回请输入0\n");
		begin:								// goto 标志位 
			scanf("%d", &cho);
		if(0 == cho){
			continue;
		}
		else{
			printf("您的输入有误，请重新输入\n");
			goto begin;						// goto 到指定标志位 begin
		}
	}
	return 0;
}







