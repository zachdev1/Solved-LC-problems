class Solution {
    int count;
    public int numberOfSteps(int num) {
    while(num != 0){
        if(num % 2 == 0){
            num = num / 2;
            count++;
        }else{
            num = num - 1; 
            count++; 
        }
    }
    return count; 
    }
}