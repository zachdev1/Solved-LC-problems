

int fib(int n){
    if(n < 3 && n > 0){
        return 1; 
    } else if(n == 0){
        return 0; 
    } 
    else{
        return fib(n-1) + fib(n-2); 
    }
}