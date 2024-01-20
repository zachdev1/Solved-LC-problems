class Solution {
    public int differenceOfSums(int n, int m) {
        int nonDivisibleSum = 0, divisibleSum = 0;
        int ans = 0; 
        for(int i = 1; i <= n; i++){
            if(i % m != 0){
                nonDivisibleSum += i; 
            } else {
                divisibleSum += i; 
            }
        }
        return (nonDivisibleSum - divisibleSum); 
    }

}