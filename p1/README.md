# Project 1

## Usage

Use the following command to run the code and input values as prompted.

(1)input value

* n: numbers of cars
* w: width of the cross road
* p: probability that a car does not stop at the red light
* time_gr: the time that a green light continues
* time_y: the time that a yellow light continues
* (need_settings: whether users want to choose a difficulty level)
* (difficulty_level: choose one of the three difficulty levels)

(2) rules

* Users can follow the input format to input a series of numbers to complement the animation
* When the animation is over, results will be shown to tell users whether they have won the game.
* If all the cars pass the crossroad safely then users win.
* If any car crashes into another car, then users lose.
* At the beginning of the game, users can choose whether they need a difficulty level. There are three difficulty levels, easy, medium and difficult. The difficulty of winning the game will change according to these three levels.
* If users don't want to choose a difficulty level, they can input 'no' at the beginning and input the value of variables they like.

(3) run the code

* Press enter
* The animation of the cars will be shown in the figure. Besides, if there are cars which don't stop at the crossroad, their plates will be shown when the animation is finished.



## Algorithm

Algorithm.(Ex. 1)

______

Input : An integer *n* representing the number of cars / A number *w* representing 		the width of the road / A number *p* representing the probability that a car will 		not stop at the crossroad / A number time_gr representing the time of green 		lights or red lights / A number time_y representing the time of  yellow lights

Output : An animation showing how the cars and the traffic lights change

1 Use the function CrossRoad_Origin(w) to draw the crossroad

2 let time_now=o

3 while true

4 	if	time_now is equal to the time when the lights should turn yellow

5 		let the lights turn yellow

6 	elseif	time_now is equal to the time when the light on the up-right corner  

​       should turn red

7 		let the light on the up-right corner turn red

8 	elseif	time_now is equal to the time when the lights should turn yellow

9 		let the lights turn yellow

10	elseif	time_now is equal to the time when the light on the up-right corner  

​       should turn green

11		let the light on the up-right corner turn green

12	else

13	end

14	Use Car function to make the car move according to time_now

15	Pause some time



Algorithm.(Ex. 2)

____

Input: a set of elements / an integer *l* 

Output: a random permutation of length *l*

1 Function a variable v=permutation(l,elements)

2 	if l is equal to 0

3 		permuatation = [the former permutation , a random  	

​    		element which belongs to the set of all the elements]

4 	else

5 		i=l-1

6 		permuatation = [the former permutation , a random  	

​    		element which belongs to the set of all the elements]

7 		let the variable v be equal to the result of permutation(l,elements)

8 	end



## Suggestions for playing this game

(1)The recommended number of cars is between 0 and 20.

(2)The recommended width of the road is between 1 and 5, since the size of the 

car is 0.5*0.25. (I make the size of the car irrelevant to the width of the road 

because I think it weird that a car can't even go through the distance of its length 

every second.)



## Contributors

@Shu Bohan

