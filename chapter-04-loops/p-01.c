#include<stdio.h>

int main(){
    // Program to print the multiplication table of 7
    for (int i = 1; i; i++) {
        printf("%d\n", 7 * i);
        // There are infinite loops in for loop in C
        // you need to establish a terminating condition
        if (i == 10) {
            break;
        }
    }
    return(0);
}

