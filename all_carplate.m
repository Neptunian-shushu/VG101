function all_plate=all_carplate(n,all_plate)%use recursion to generate plates for all the cars
if n==1
    all_plate=[all_plate;car_plate2(5,[])];
else
    i=n-1;
    all_plate=[all_plate;car_plate2(5,[])];
    all_plate=all_carplate(i,all_plate);
end
end


function plate=car_plate2(l,plate)%use recursion to generate a plate
elements=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'];
if l==0
    plate=[elements(randi(26)),32,plate];
else
    i=l-1;
    plate=[elements(randi(36)),plate];
    plate = car_plate2(i,plate);
end
end