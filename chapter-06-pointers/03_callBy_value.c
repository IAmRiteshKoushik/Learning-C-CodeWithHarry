#include<stdio.h>

// Function declaration
int sum(int a, int b);

// Driver program
int main(){

    int a = 5, b = 7;
    printf("The value fof 4 + 7 is %d\n", sum(a,b));
    printf("The value of x and y is %d and %d\n", a, b);
    return(0);
}

// Function definition
int sum(int a, int b){
    int c;

    // Here a and b are defined in the local scope
    // and they cannot change the value of 
    // actual a and b which are defined in the scope
    // of the main program.

    b = 2345;
    a = 2345;
    c = a + b;
    return c;
}