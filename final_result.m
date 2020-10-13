if numel(all_plate(illegal_car,:))==0
    if terminal==n%if all the cars have gone through the road
        disp("All the cars stop at the crossroad. YOU WIN!!!");
    else%all the cars stop at the crossroad but there are car crashes
        disp('YOU LOSE!!!')
    end
else
    if terminal==n%if all the cars have gone through the road though some cars don't stop at the crossroad
        disp("the plates of cars which don't stop at the crossroad");
        disp(all_plate(illegal_car,:));
        disp("YOU WIN");
    else%not all cars stop at the crossroad and there are car crashes
        disp("the plates of cars which don't stop at the crossroad");
        disp(all_plate(illegal_car,:));
        disp('YOU LOSE!!!');
    end
end
disp("game over");