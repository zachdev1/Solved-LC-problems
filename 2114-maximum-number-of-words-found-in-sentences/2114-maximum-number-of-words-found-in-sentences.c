int mostWordsFound(char** sentences, int sentencesSize) {

    int maxCount = 0; 
    
    for(int i = 0; i < sentencesSize; i++){
        int count = 0;
        for(int j = 0; j < strlen(sentences[i]); j++){
            if(j == 0 || sentences[i][j - 1] == ' '){
                count++; 
            }
        }
        if(count > maxCount){
            maxCount = count;
        }
    }
    return maxCount; 
}