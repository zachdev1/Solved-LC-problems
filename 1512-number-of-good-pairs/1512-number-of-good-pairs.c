int numIdenticalPairs(int* nums, int numsSize){
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        for(int j = 1; j < numsSize; j++){
            if(nums[i] == nums[j] && i < j){
                count++; 
            }
        }
    }
    return count;
}