#C-based parking lot management system
1. Introduction
1. Design purpose: to understand the logical structure and storage structure of linear tables, and to further improve the ability to use theoretical knowledge to guide solving practical problems.
2. Description of the problem: Suppose that the parking lot has only one narrow passage that can park several cars, and only one gate for cars to enter and exit. The cars are arranged in the parking lot in the order of arrival. If the parking lot is full of cars, the later cars can only wait on the sidewalk outside the door. Once there is a car driving away in the parking lot, they will be queued. The first car on the sidewalk can enter; when a car in the parking lot wants to drive away, because the parking lot is a long and narrow passage, the vehicle entering after it must first push out of the parking lot to make way for him, and wait for the vehicle to open the gate , The vehicles that made way for him enter the parking lot in the original order. Try to design such a parking lot simulation management program.


2. Data structure design:
(1) In order to distinguish each car and understand the current location of each car, it is necessary to record the car's license plate number and the current state of the car.
(2) In order to facilitate the management of the parking lot, a fixed number shall be assigned to each parking space.
(3) When the parking spaces of the parking lot are full of cars, and when new cars arrive, they should be dispatched to the sidewalk. The vehicles on the sidewalk should be placed on the sidewalk in the order of entering the sidewalk. Assign a fixed number to each position on the sidewalk. When a car leaves the parking space, the first car on the sidewalk immediately enters a certain parking space in the parking space.
(4) When a certain car leaves the parking lot, the car entering the parking space behind him must make way for him, and when he drives away, the car that gave way has to re-enter a certain parking space in the parking space according to the original parking order To complete this function, define a structure.


3. Function (function) design:
The program is generally divided into four functional modules, namely:
(1) Program function introduction and operation prompt module
(2) Management module for cars entering parking spaces
(3) The management module of the car leaving the parking space
(4) Inquiry module for viewing parking lot status
