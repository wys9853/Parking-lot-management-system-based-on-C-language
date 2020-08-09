C-based parking lot management system
===
Introduction
------
(1) Design purpose: to understand the logical structure and storage structure of linear tables, and to further improve the ability to use theoretical knowledge to guide solving practical problems.

(2) Description of the problem: Suppose that the parking lot has only one narrow passage that can park several cars, and only one gate for cars to enter and exit. The cars are arranged in the parking lot in the order of arrival. If the parking lot is full of cars, the later cars can only wait on the sidewalk outside the door. Once there is a car driving away in the parking lot, they will be queued. The first car on the sidewalk can enter; when a car in the parking lot wants to drive away, because the parking lot is a long and narrow passage, the vehicle entering after it must first push out of the parking lot to make way for him, and wait for the vehicle to open the gate , The vehicles that made way for him enter the parking lot in the original order. Try to design such a parking lot simulation management program.


Data structure design:
-----
(1) In order to distinguish each car and understand the current location of each car, it is necessary to record the car's license plate number and the current state of the car.

(2) In order to facilitate the management of the parking lot, a fixed number shall be assigned to each parking space.

(3) When the parking spaces of the parking lot are full of cars, and when new cars arrive, they should be dispatched to the sidewalk. The vehicles on the sidewalk should be placed on the sidewalk in the order of entering the sidewalk. Assign a fixed number to each position on the sidewalk. When a car leaves the parking space, the first car on the sidewalk immediately enters a certain parking space in the parking space.

(4) When a certain car leaves the parking lot, the car entering the parking space behind him must make way for him, and when he drives away, the car that gave way has to re-enter a certain parking space in the parking space according to the original parking order To complete this function, define a structure.


Function (function) design:
----
The program is generally divided into four functional modules, namely:
(1) Program function introduction and operation prompt module

(2) Management module for cars entering parking spaces

(3) The management module of the car leaving the parking space

(4) Inquiry module for viewing parking lot status


Interface preview
-----
Parking lot main page：
![Alt text](https://github.com/wys9853/Parking-lot-management-system-based-on-C-language/blob/master/image/image1.png)


Leave the parking lot subpage：
![Alt text](https://github.com/wys9853/Parking-lot-management-system-based-on-C-language/blob/master/image/image2.png)


Run and test
-----
1.Test data and results:

(1) There are 7 consecutive cars arriving, the license plate numbers are CF001, CF002, CF003, CF004, CF005, CF006, CF007, the first 5 cars should enter the parking spaces 1-5, and the sixth and seventh cars should park. Position 1, 2 of the sidewalk.

(2) After the situation in (1) above occurs, let the car with the license plate CF003 drive away from the parking lot, it should display the give way action of CF005, CF004 and the action of CF006 from the sidewalk to the parking space.
![Alt text](https://github.com/wys9853/Parking-lot-management-system-based-on-C-language/blob/master/image/image3.png)

(3) Check the status of parking spaces and sidewalks at any time. There should be no vacancies and cars on the sidewalks.
![Alt text](https://github.com/wys9853/Parking-lot-management-system-based-on-C-language/blob/master/image/image4.png)





















