#include<stdio.h>

int main(){

    // First increment and then display
    int i = 0;
    printf("Value of i = %d\n", ++i);
    printf("Value of i = %d\n", ++i);
    printf("Value of i = %d\n", ++i);

    // First display and then increment
    int a = 0;
    printf("Value of a = %d\n", a++);
    printf("Value of a = %d\n", a++);
    printf("Value of a = %d\n", a++);

    // First decrement and then display
    int j = 0;
    printf("Value of j = %d\n", --j);
    printf("Value of j = %d\n", --j);
    printf("Value of j = %d\n", --j);

    // First display and then decrement
    int k = 0;
    printf("Value of k = %d\n", k--);
    printf("Value of k = %d\n", k--);
    printf("Value of k = %d\n", k--);
    return(0);
}