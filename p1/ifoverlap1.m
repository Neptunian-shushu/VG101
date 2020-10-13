[r1,c1]=find(position(:,9)==3 | position(:,9)==4);
number1=length(r1);
a01=position(i,5);
a02=position(i,6);
for j1=1:number1
    xj1=position(r1(j1),1:4);
    yj1=position(r1(j1),5:8);
    [in11,on11]=inpolygon(a,a01,xj1,yj1);
    [in12,on12]=inpolygon(a,a02,xj1,yj1);
    overlap1=in11+on11+in12+on12;
    if overlap1==0
    else
        break
    end
end