n1=1;
r1=0;
r2=0;
r3=0;
r4=0;
position=[];
plate_vector=[];
while n1<=n
    r=randperm(4,4);
    r=r(1);
    x1=[7/2*w+0.5+r1 7/2*w+0.5+r1 7/2*w+1+r1 7/2*w+1+r1];
    y1=[w/4-0.125 w/4+0.125 w/4+0.125 w/4-0.125];
    x2=[-7/2*w-0.5-r2 -7/2*w-0.5-r2 -7/2*w-1-r2 -7/2*w-1-r2];
    y2=[-w/4+0.125 -w/4-0.125 -w/4-0.125 -w/4+0.125];
    x3=[-w/4+0.125 -w/4+0.125 -w/4-0.125 -w/4-0.125];
    y3=[7/2*w+0.5+r3 7/2*w+1+r3 7/2*w+1+r3 7/2*w+0.5+r3];
    x4=[w/4-0.125 w/4-0.125 w/4+0.125 w/4+0.125];
    y4=[-7/2*w-0.5-r4 -7/2*w-1-r4 -7/2*w-1-r4 -7/2*w-0.5-r4];
    switch r
        case 1%right
            r1=r1+1;
        case 2%left
            r2=r2+1;
        case 3%up
            r3=r3+1;
        case 4%down
            r4=r4+1;
    end%to mark the number of cars on each road
    switch r
    case 1%right
        h1=patch(x1,y1,'blue');
        position=[position;x1 y1 r 0];
    case 2%left
        h2=patch(x2,y2,'magenta');
        position=[position;x2 y2 r 0];
    case 3%up
        h3=patch(x3,y3,'yellow');
        position=[position;x3 y3 r 0];
    case 4%down
        h4=patch(x4,y4,'cyan');
        position=[position;x4 y4 r 0];
    end
    n1=n1+1;
    all_plate=all_carplate(n,[]);
    axis([-7/2*w,7/2*w,-7/2*w,7/2*w]);%the size of the axis
    axis square;
end
%to randomly arrange the cars