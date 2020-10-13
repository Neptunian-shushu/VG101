function y=CrossRoad_Origin(w)
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
    axis([-7/2*w,7/2*w,-7/2*w,7/2*w]);%the size of the axis
    xc=[w/2];
    yc=ones(1,1)*w/2;
    plot(xc,yc,'g.','MarkerSize',35);%green traffic light
    plot(-xc,-yc,'g.','MarkerSize',35);%green traffic light
    plot(xc,-yc,'r.','MarkerSize',35);%green traffic light
    plot(-xc,yc,'r.','MarkerSize',35);%green traffic light
end