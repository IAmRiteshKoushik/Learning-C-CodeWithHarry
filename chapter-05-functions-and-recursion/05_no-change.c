#include<stdio.h>

void change(int a); // function declaration

int main(){
    int a = 44;
    change(a);
    printf("The value of a is %d", a);

    // The changes do not take place because only a copy of the value is received by the function and that does not alter the actual value of the variable declared in the main function.

    return(0);
}


void change(int a){
    a = 77;
}