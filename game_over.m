terminal=0;%if all the cars have gone through the road
for i=1:n
    switch position(i,9)
        case 1
            if position(i,3)<=-7/2*w
                terminal=terminal+1;
            else
            end
        case 2
            if position(i,3)>=7/2*w
                terminal=terminal+1;
            else
            end
        case 3
            if position(i,6)<=-7/2*w
                terminal=terminal+1;
            else
            end
        case 4
            if position(i,6)>=7/2*w
                terminal=terminal+1;
            else
            end
    end
    if terminal==n%all the cars have gone through the road
        break
    else
    end
end
                
