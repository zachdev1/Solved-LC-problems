/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int maxCandies = 0;
    bool *result = malloc(sizeof(bool) * candiesSize); 
    
    // find max candies
    for(int i = 0; i < candiesSize; i++){
        if(candies[i] > maxCandies){
            maxCandies = candies[i];
        }
    }
    
    for(int i = 0; i < candiesSize; i++){
        if(candies[i] + extraCandies >= maxCandies){
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    *returnSize = candiesSize; 
    return result; 
}