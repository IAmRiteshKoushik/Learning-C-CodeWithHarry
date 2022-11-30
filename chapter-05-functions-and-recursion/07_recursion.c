#include<stdio.h>

int factorial(); // function prototype

int main(){
    int a = 4;
    printf("The value of factorial %d is %d", a, factorial(a));
    return(0);
}

int factorial(int x){
    int f;
    if (x==1 || x==0)
    {
        return 1;   
    }
    else
    {
        return x * factorial(x-1);
    }
    
}
