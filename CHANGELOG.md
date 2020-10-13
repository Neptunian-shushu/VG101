# Changelog

All notable changes to this project will be documented in this file.

## [m1] - 2020-10-01

### Added

- Basic drawing of crossroad and light
- Simple input prompt
- Color cycle of the traffic light

## [m2] - 2020-10-05

**Added**

- Polish the "number" function to make the 4 numbers more randomly arranged. （Later find that it's useless)
- Randomly create a car on one road, and stop at the cross road when the light is red
- failed to separate the Traffic_l function and the Car function
- failed to create random numbers of cars
- failed to create cars' plates

## [m3] - 2020-10-11

**Added**

* Add a loop in the main script in order to make sure that the frame change every 0.5 second.
* Change the CrossRoad function into CrossRoad_Origin. Add a new function named CrossRoad to make sure that the traffic light on the road changes according to the variable "time_now".
* Change the function "Car" into the script "Car" so that it can use the variables which are used in the main script.
* Add a new function named "Arrange_car" which can arrange all the cars on the road randomly.
* Add a new function named car_plate which can randomly create car plates for each cars by using recursive.
* Add the variable "p" which determines the possibility that a car does not stop at the red light.
* Add two scripts named "ifoverlap1" and "infoverlap2" which can determine whether there are cars overlap.
* Add a script named "game_over" which can show the ending of the whole game.

* Add a new script named "Difficult_level" which allows users to choose the difficulty level.
* Add a new script named "final_result" which is used to display the result of the game.
* Add a new function named traffic_lights which contains the function of displaying the change of the traffic lights.