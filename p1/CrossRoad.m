function y=CrossRoad(w,time_now,time_gr,time_y,t)
    x1=(-7/2*w:3*w:-w/2);
    y1=ones(1,2)*w/2;
    plot(x1,y1,'k-'),%draw the cross road parallel to the X-axis
    hold on
    plot(-x1,y1,'k-');%draw the cross road parallel to the X-axis
    plot(x1,-y1,'k-');%draw the cross road parallel to the X-axis
    plot(-x1,-y1,'k-');%draw the cross road parallel to the X-axis
    plot(x1,0*y1,'k--');%the dotted curve in the middle of the road
    plot(-x1,0*y1,'k--');%the dotted curve in the middle of the road
    hold on
    x2=ones(1,2)*w/2;
    y2=(-7/2*w:3*w:-w/2);
    plot(x2,y2,'k-');%draw the cross road parallel to the Y-axis
    plot(-x2,y2,'k-');%draw the cross road parallel to the Y-axis
    plot(x2,-y2,'k-');%draw the cross road parallel to the Y-axis
    plot(-x2,-y2,'k-');%draw the cross road parallel to the Y-axis
    plot(0*x2,y2,'k--');%the dotted curve in the middle of the road
    plot(0*x2,-y2,'k--');%the dotted curve in the middle of the road

    hold on
    xc=[w/2];
    yc=ones(1,1)*w/2;
    if time_now<time_gr
        plot(xc,yc,'g.','MarkerSize',35);%green traffic light
        plot(-xc,-yc,'g.','MarkerSize',35);%green traffic light
        plot(xc,-yc,'r.','MarkerSize',35);%green traffic light
        plot(-xc,yc,'r.','MarkerSize',35);%green traffic light
    elseif time_now>=time_gr && time_now<time_gr+time_y
        plot(w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
        plot(-w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
        plot(w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
        plot(-w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
    elseif time_now>=time_gr+time_y && time_now<time_gr+time_y+time_gr
        plot(w/2,w/2,'r.','MarkerSize',35);%red traffic light
        plot(-w/2,-w/2,'r.','MarkerSize',35);%red traffic light
        plot(w/2,-w/2,'g.','MarkerSize',35);%red traffic light
        plot(-w/2,w/2,'g.','MarkerSize',35);%red traffic light
    elseif time_now>=time_gr+time_y+time_gr && time_now<t
        plot(w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
        plot(-w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
        plot(w/2,-w/2,'y.','MarkerSize',35);%yellow traffic light
        plot(-w/2,w/2,'y.','MarkerSize',35);%yellow traffic light
    else
        plot(xc,yc,'g.','MarkerSize',35);%green traffic light
        plot(-xc,-yc,'g.','MarkerSize',35);%green traffic light
        plot(xc,-yc,'r.','MarkerSize',35);%green traffic light
        plot(-xc,yc,'r.','MarkerSize',35);%green traffic light
    end
    axis([-7/2*w,7/2*w,-7/2*w,7/2*w]);%the size of the axis
end