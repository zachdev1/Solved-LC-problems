bool isPalindrome(int x){
    int n = x; 
    long int reverse = 0, remainder;
    while(n != 0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if(x == reverse && x >= 0){
        return true;
    }else 
        return false;
}
