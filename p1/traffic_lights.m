function tl=traffic_lights(w,time_now,time_gr,time_y,t)
if time_now == time_gr%turn yellow
    plot(w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
    hold on
    plot(-w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
    plot(w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
    plot(-w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
    axis([-7/2*w,7/2*w,-7/2*w,7/2*w]);%the size of the axis
elseif time_now == time_gr+time_y%turn red
    plot(w/2,w/2,'r.','MarkerSize',35);%red traffic light
    hold on
    plot(-w/2,-w/2,'r.','MarkerSize',35);%red traffic light
    plot(w/2,-w/2,'g.','MarkerSize',35);%green traffic light
    plot(-w/2,w/2,'g.','MarkerSize',35);%green traffic light
    axis([-7/2*w,7/2*w,-7/2*w,7/2*w]);%the size of the axis
elseif time_now == time_gr+time_y+time_gr%turn yellow
    plot(w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
    hold on
    plot(-w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
    plot(w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
    plot(-w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
    axis([-7/2*w,7/2*w,-7/2*w,7/2*w]);%the size of the axis
elseif time_now == t%turn green
    plot(w/2,w/2,'g.','MarkerSize',35);%green traffic light
    hold on
    plot(-w/2,-w/2,'g.','MarkerSize',35);%green traffic light
    plot(w/2,-w/2,'r.','MarkerSize',35);%red traffic light
    plot(-w/2,w/2,'r.','MarkerSize',35);%red traffic light
    axis([-7/2*w,7/2*w,-7/2*w,7/2*w]);%the size of the axis
    time_now=0;
else
end