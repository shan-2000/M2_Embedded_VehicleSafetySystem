## Vehicle Safety System

# Requirements
## Introduction
   As we are human we need to act upon the cause and consequence. A car is a massive machine with around 30 thousand parts and it produces enormous output power. In case of cause, car is accelerating which increases the speed. Too much of speed may end up in accident or uncontrollable situation. To monitor the real time performance of the car the Console is used. If an error occurs in a car control system it is tedious process to diagnose where the error occured. On considering the mentioned points it is must to use a console in a car. There are two types of vehicle safety system they are, 
* crash mitigation system
* crash avoidance system
   
crash mitigation system is used here. A collision avoidance system (CAS), also known as a pre-crash system, forward collision warning system, or collision mitigation system, is an advanced driver-assistance system designed to prevent or reduce the severity of a collision. Here, the ultrasonic sensor is used to identify the the distance between the driver's car and other car. If the ultrasonic sensor gets activated the control system shows error message then the driver can stop the vehicle or slows down the vehicle. 

## Research
![image](https://user-images.githubusercontent.com/45603597/144423677-ce353581-9b52-4b2d-b0c4-7e765f17f636.png)
 
## Cost and Features and Timeline
![CFT](https://user-images.githubusercontent.com/45603597/144423409-d6bdc64c-f1e3-4532-a05e-51e082d1a2d4.png)

I have attached the link to the 3 Dimentional graph of CFT(cost, Feature, Timeline) where, X axis represents cost in 100 RS per unit, Y axis represents Features in points per unit, Z axis represents time in days per unit.

## Defining Our System
    Safety alert system for vehicle
## SWOT ANALYSIS

![SWOT](https://user-images.githubusercontent.com/45603597/144420855-15dbfe10-8b10-471c-b70d-5cfa594ee6f1.png)

## 4W and 1H

## Who

    The people who have car can use this safety system. This system can be employed in the "Driving school" while the students learning to drive the car in real time. 

## What

    This vehicle safety system alerts the driver by giving both light and sound signal if any other obstacles comes near to the car. The alerting radius of the car can be modifiable.

## When

    This system can be used when there is a need to follow more safety.

## Where

    This system can be used in school areas and in campus for extra safety.

## How

    This system can be implemented in every car by fixing the ultrasonic sensors around the car and monitor the sensor boundary. If the boundary gets distrubed the. The system will give alert.

# Detail requirements
##  High level Requirements

| ID    | Description                             | Status              | 
|-------|-----------------------------------------|---------------------|
| HLR01 | Ultrasonic Sensor                       |Implemented          |
| HLR02 |Potentiometer                            |Implemented          |

##  Low level Requirements

| ID    | Description                             | Status              | 
|-------|-----------------------------------------|---------------------|
| LLR01 |Ultrasonic Sensor - If the Ultrasonic senses the vehicle slows down   |Implemented          |
| LLR2  |Potentiometer- through ADC the decimal value is got and these decimal value is used to control the speed of motor|Implemented          |

# Design

## Flowchart

![HighLevelDiagram](https://user-images.githubusercontent.com/45603597/144247047-9123c785-8cc1-4c81-9626-013bb02536e8.png)

## Class diagram


![LowLevelDiagram](https://user-images.githubusercontent.com/45603597/144247162-615bed5e-6cc7-471f-9960-9375229a6216.png)
