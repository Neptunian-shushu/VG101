need_settings=input('need difficulty level(yes or no)? ','s');
switch need_settings
    case 'no'
        I=prompt();
    case 'yes'
        difficulty_level=input('easy, medium, or difficult? ','s');
        switch difficulty_level
            case 'easy'
                I=[4 2 0.1 10 0.5];
            case 'medium'
                I=[10 2 0.3 9 0.5];
            case 'difficult'
                I=[15 1 0.5 6 0.5];
        end
end