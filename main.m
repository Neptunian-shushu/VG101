clear all;clc;
Difficult_Level;
n = I(1);
w = I(2);
p = I(3);
time_gr = I(4);
time_y = I(5);
Arrange_car;
CrossRoad_Origin(w);
t=time_gr+time_y+time_gr+time_y;
time_now=0;
fr=4;%frame number
pt=1/fr;%pause time
illegal_car=[];
overlap_t=0;%the total number of overlapped cars
overlap1=0;
overlap2=0;
n1=n;
if_judge=zeros(1,n);
while true
traffic_lights(w,time_now,time_gr,time_y,t);
Car;%to make the car move
pause(pt);
clf;
CrossRoad(w,time_now,time_gr,time_y,t);
time_now=time_now+pt;
overlap_t=overlap1+overlap2;
if overlap_t==0
else
    break
end
game_over;
if terminal==n%all the cars have gone through the road
        break
else
end

end
final_result;
axis square;