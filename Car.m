i1=0;
i2=0;
i3=0;
i4=0;
for i=1:n
    switch position(i,9)
        case 1%right
            a=position(i,1);
            i1=i1+1;
            position(i,10)=i1;
            target_col=9;
            target_val1=1;
            [row1,col1]=find(position(:,target_col)==target_val1);
            if i1==1%the origin first car
                if time_now<time_gr+time_y || (time_now>=time_gr+time_y+time_gr && time_now<=t)%how the first car move
                %green light:can move
                    position(i,1:4)=position(i,1:4)-pt;
                    patch(position(i,1:4),position(i,5:8),'blue');
                elseif time_now >= time_gr+time_y && time_now<time_gr+time_y+time_gr
                    if a>w/2-pt/2 && a<=w/2+pt/2%at the crossroad
                        if if_judge(i)==0
                            if rand>p%obey the traffic rule
                                patch(position(i,1:4),position(i,5:8),'blue');
                                %red light:can't move
                            else%break the rule
                                position(i,1:4)=position(i,1:4)-pt;
                                patch(position(i,1:4),position(i,5:8),'blue');
                                illegal_car=[illegal_car;i];
                            end
                            if_judge(i)=1;
                        else
                            patch(position(i,1:4),position(i,5:8),'blue');
                        end
                    else%not at the crossroad
                        position(i,1:4)=position(i,1:4)-pt;
                        patch(position(i,1:4),position(i,5:8),'blue');
                    end
                end
            else%not the origin first car
                if a<=w/2-pt/2% if the car has passed the traffic light
                    position(i,1:4)=position(i,1:4)-pt;
                    patch(position(i,1:4),position(i,5:8),'blue');
                elseif position(row1(i1),1)-1-pt==position(row1(i1-1),1) && a>w/2+pt/2%not the first car, can move
                    position(i,1:4)=position(i,1:4)-pt;
                    patch(position(i,1:4),position(i,5:8),'blue');
                elseif position(row1(i1),1)-1==position(row1(i1-1),1) && a>w/2+pt/2%not the first car, can't move
                    patch(position(i,1:4),position(i,5:8),'blue');
                else% the first car
                    if time_now<time_gr+time_y || (time_now>=time_gr+time_y+time_gr && time_now<=t)%how the first car move
                    %green light:can move
                        position(i,1:4)=position(i,1:4)-pt;
                        patch(position(i,1:4),position(i,5:8),'blue');
                    elseif time_now >= time_gr+time_y && time_now<time_gr+time_y+time_gr
                        if a>w/2-pt/2 && a<=w/2+pt/2%at the stop line
                            if if_judge(i)==0
                                if rand>p%obey the traffic rule
                                    patch(position(i,1:4),position(i,5:8),'blue');
                                    %red light:can't move
                                else%break the rule
                                    position(i,1:4)=position(i,1:4)-pt;
                                    patch(position(i,1:4),position(i,5:8),'blue');
                                    illegal_car=[illegal_car;i];
                                end
                                if_judge(i)=1;
                            else
                                patch(position(i,1:4),position(i,5:8),'blue');
                            end
                        else%not at the stop line
                            position(i,1:4)=position(i,1:4)-pt;
                            patch(position(i,1:4),position(i,5:8),'blue');
                        end
                    end
                end
            end
            ifoverlap1;
            if overlap1==0
            else
                break
            end
                
        case 2%left
            b=position(i,1);
            i2=i2+1;
            position(i,10)=i2;
            target_col=9;
            target_val2=2;
            [row2,col2]=find(position(:,target_col)==target_val2);
            if i2==1
                if time_now<time_gr+time_y || (time_now>=time_gr+time_y+time_gr && time_now<=t)%how the first car move
                    position(i,1:4)=position(i,1:4)+pt;
                    patch(position(i,1:4),position(i,5:8),'magenta');
                elseif time_now >= time_gr+time_y && time_now<time_gr+time_y+time_gr
                    if b>=-w/2-pt/2 && b<-w/2+pt/2%at the crossroad
                        if if_judge(i)==0
                            if rand>p%obey the rule
                                patch(position(i,1:4),position(i,5:8),'magenta');
                            else%break the rule
                                position(i,1:4)=position(i,1:4)+pt;
                                patch(position(i,1:4),position(i,5:8),'magenta');
                                illegal_car=[illegal_car;i];
                            end
                            if_judge(i)=1;
                        else
                            patch(position(i,1:4),position(i,5:8),'magenta');
                        end
                    else%not at the crossroad
                        position(i,1:4)=position(i,1:4)+pt;
                        patch(position(i,1:4),position(i,5:8),'magenta');
                    end
                end
            else%not the origin first car
                if b>=-w/2+pt/2% if the car has passed the traffic light
                    position(i,1:4)=position(i,1:4)+pt;
                    patch(position(i,1:4),position(i,5:8),'magenta');
                elseif position(row2(i2),1)+1+pt==position(row2(i2-1),1) && b<-w/2-pt/2%not the first car, can move
                    position(i,1:4)=position(i,1:4)+pt;
                    patch(position(i,1:4),position(i,5:8),'magenta');
                elseif position(row2(i2),1)+1==position(row2(i2-1),1) && b<-w/2-pt/2%not the first car, can't move
                    patch(position(i,1:4),position(i,5:8),'magenta');
                else%the first car
                    if time_now<time_gr+time_y || (time_now>=time_gr+time_y+time_gr && time_now<=t)%how the first car move
                        position(i,1:4)=position(i,1:4)+pt;
                        patch(position(i,1:4),position(i,5:8),'magenta');
                    elseif time_now >= time_gr+time_y && time_now<time_gr+time_y+time_gr
                        if b>=-w/2-pt/2 && b<-w/2+pt/2%at the stop line
                            if if_judge(i)==0
                                if rand>p%obey the traffic rule
                                    patch(position(i,1:4),position(i,5:8),'magenta');
                                else%break the rule
                                    position(i,1:4)=position(i,1:4)+pt;
                                    patch(position(i,1:4),position(i,5:8),'magenta');
                                    illegal_car=[illegal_car;i];if_judge(i)=1;
                                end
                                if_judge(i)=1;
                            else
                                patch(position(i,1:4),position(i,5:8),'magenta');
                            end
                        else%not at the stop line
                            position(i,1:4)=position(i,1:4)+pt;
                            patch(position(i,1:4),position(i,5:8),'magenta');
                        end
                    end
                end
            end
            ifoverlap2;
            if overlap2==0
            else
                break
            end
            
        case 3%up
            c=position(i,5);%show the position of the car
            i3=i3+1;
            position(i,10)=i3;
            target_col=9;
            target_val3=3;
            [row3,col3]=find(position(:,target_col)==target_val3);
            if i3==1%the origin first car
                if time_now>=time_gr && time_now<t%how the first car move
                    position(i,5:8)=position(i,5:8)-pt;
                    patch(position(i,1:4),position(i,5:8),'yellow');
                elseif time_now<time_gr
                    if c>w/2-pt/2 && c<=w/2+pt/2%at the stop line
                        if if_judge(i)==0
                            if rand>p%obey the traffic rule
                                patch(position(i,1:4),position(i,5:8),'yellow');
                            else%break the rule
                                position(i,5:8)=position(i,5:8)-pt;
                                patch(position(i,1:4),position(i,5:8),'yellow');
                                illegal_car=[illegal_car;i];
                            end
                            if_judge(i)=1;
                        else
                            patch(position(i,1:4),position(i,5:8),'yellow');
                        end
                    else%not at the stop line
                        position(i,5:8)=position(i,5:8)-pt;
                        patch(position(i,1:4),position(i,5:8),'yellow');
                    end
                end
            else
                if c<=w/2-pt/2% if the car has passed the traffic light
                    position(i,5:8)=position(i,5:8)-pt;
                    patch(position(i,1:4),position(i,5:8),'yellow');
                elseif position(row3(i3),5)-1-pt==position(row3(i3-1),5) && c>w/2+pt/2%not the first car, can move
                    position(i,5:8)=position(i,5:8)-pt;
                    patch(position(i,1:4),position(i,5:8),'yellow');
                elseif position(row3(i3),5)-1==position(row3(i3-1),5) && c>w/2+pt/2%not the first car, can't move
                    patch(position(i,1:4),position(i,5:8),'yellow');
                else%the first car
                    if time_now>=time_gr && time_now<t%how the first car move
                        position(i,5:8)=position(i,5:8)-pt;
                        patch(position(i,1:4),position(i,5:8),'yellow');
                    elseif time_now<time_gr
                        if c>w/2-pt/2 && c<=w/2+pt/2%at the stop line  
                            if if_judge(i)==0
                                if rand>p%obey the traffic rule
                                    patch(position(i,1:4),position(i,5:8),'yellow');
                                else%break the rule
                                    position(i,5:8)=position(i,5:8)-pt;
                                    patch(position(i,1:4),position(i,5:8),'yellow');
                                    illegal_car=[illegal_car;i];
                                end
                                if_judge(i)=1;
                            else
                                patch(position(i,1:4),position(i,5:8),'yellow');
                            end
                        end
                    else%not at the stop line
                        position(i,5:8)=position(i,5:8)-pt;
                        patch(position(i,1:4),position(i,5:8),'yellow');
                    end
                end
            end
            
        case 4%down
            d=position(i,5);%show the position of the car
            i4=i4+1;
            position(i,10)=i4;
            target_col=9;
            target_val4=4;
            [row4,col4]=find(position(:,target_col)==target_val4);
            if i4==1
                if time_now>=time_gr && time_now<t%how the first car move
                    position(i,5:8)=position(i,5:8)+pt;
                    patch(position(i,1:4),position(i,5:8),'cyan');
                elseif time_now<time_gr
                    if d>=-w/2-pt/2 && d<-w/2+pt/2%at the stop line
                        if if_judge(i)==0
                            if rand>p%obey the traffic rule
                                patch(position(i,1:4),position(i,5:8),'cyan');
                            else%break the rule
                                position(i,5:8)=position(i,5:8)+pt;
                                patch(position(i,1:4),position(i,5:8),'cyan');
                                illegal_car=[illegal_car;i];
                            end
                            if_judge(i)=1;
                        else
                            patch(position(i,1:4),position(i,5:8),'cyan');
                        end
                    else%not at the stop line
                        position(i,5:8)=position(i,5:8)+pt;
                        patch(position(i,1:4),position(i,5:8),'cyan');
                    end
                end
            else
            if d>=-w/2+pt/2% if the car has passed the traffic light
                position(i,5:8)=position(i,5:8)+pt;
                patch(position(i,1:4),position(i,5:8),'cyan');
            elseif position(row4(i4),5)+1+pt==position(row4(i4-1),5) && d<-w/2-pt/2%not the first car, can move
                position(i,5:8)=position(i,5:8)+pt;
                patch(position(i,1:4),position(i,5:8),'cyan');
            elseif position(row4(i4),5)+1==position(row4(i4-1),5) && d<-w/2-pt/2%not the first car, can't move
                patch(position(i,1:4),position(i,5:8),'cyan');
            else
                if time_now>=time_gr && time_now<t%how the first car move
                    position(i,5:8)=position(i,5:8)+pt;
                    patch(position(i,1:4),position(i,5:8),'cyan');
                elseif time_now<time_gr
                    if d>=-w/2-pt/2 && d<-w/2+pt/2%at the stop line
                        if if_judge(i)==0
                            if rand>p%obey the traffic rule
                                patch(position(i,1:4),position(i,5:8),'cyan');
                            else%break the rule
                                position(i,5:8)=position(i,5:8)+pt;
                                patch(position(i,1:4),position(i,5:8),'cyan');
                                illegal_car=[illegal_car;i];
                            end
                            if_judge(i)=1;
                        else
                            patch(position(i,1:4),position(i,5:8),'cyan');
                        end
                    else%not at the stop line
                        position(i,5:8)=position(i,5:8)+pt;
                        patch(position(i,1:4),position(i,5:8),'cyan');
                    end
                end
            end
        end
    end
    axis square;
end
