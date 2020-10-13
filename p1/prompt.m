function I=prompt()
    n = input('number of cars= ');
    w = input('width of the cross road= ');
    p = input('probability= ');
    time_gr = input('time of green or red light= ');
    time_y = input('time of yellow light= ');
    I=[n w p time_gr time_y];
end