#include<stdio.h>

// Sum is a functin which takes a nad b as input and returns an integer as an output

int sum(int a, int b); // Function prototype

int main(){
    int c;
    c = sum(2, 15); // function call
    printf("The value of c is %d", c);
    return(0);
}

int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}