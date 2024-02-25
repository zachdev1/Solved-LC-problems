int largestAltitude(int* gain, int gainSize) {
    
    int *prefixSum = malloc(sizeof(int) * (gainSize + 1));
    int max = 0;
    
    prefixSum[0] = 0;
    
    for(int i = 0; i < gainSize; i++){
        prefixSum[i + 1] = prefixSum[i] + gain[i];
        
        if(prefixSum[i + 1] > max){
            max = prefixSum[i + 1];
        }
    }
    
    return max; 
}