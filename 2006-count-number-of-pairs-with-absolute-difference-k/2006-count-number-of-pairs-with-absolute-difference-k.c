int countKDifference(int* nums, int numsSize, int k) {
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(i < j && abs(nums[i] - nums[j]) == k){
                count++;
            }
        }
    }
    return count; 
}