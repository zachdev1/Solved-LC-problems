char* toLowerCase(char* s) {
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }
    }
    return s;
}