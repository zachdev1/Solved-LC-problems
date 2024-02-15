int arithmeticTriplets(int* nums, int numsSize, int diff) {
    
    int count = 0;
    
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            for(int k = j + 1; k < numsSize; k++){
                if(nums[i] < nums[j] && nums[j] < nums[k] && nums[j] - nums[i] == diff && nums[k] - nums[j] == diff){
                    count++;
                } 
            }
        }
    }
    return count; 
}