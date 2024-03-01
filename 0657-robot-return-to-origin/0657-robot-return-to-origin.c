bool judgeCircle(char* moves) {
    
    int x = 0, y = 0, i = 0;
    
    while(moves[i] != '\0'){
        switch(moves[i]){
            case 'R':
                y++;
                break;
            case 'L':
                y--;
                break;
            case 'U':
                x--;
                break;
            case 'D':
                x++;
                break;
        }
        i++;
    }
    if(x == 0 && y == 0){
        return true;
    } else{
        return false;
    }
}