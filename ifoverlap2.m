[r2,c2]=find(position(:,9)==3 | position(:,9)==4);
number2=length(r2);
b01=position(i,5);
b02=position(i,6);
for j2=1:number2
    xj2=position(r2(j2),1:4);
    yj2=position(r2(j2),5:8);
    [in21,on21]=inpolygon(b,b01,xj2,yj2);
    [in22,on22]=inpolygon(b,b02,xj2,yj2);
    overlap2=in21+on21+in22+on22;
    if overlap2==0
    else
        break
    end
end