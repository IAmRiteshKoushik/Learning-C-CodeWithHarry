#include<stdio.h>

int main(){
    
    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y);
    printf("The value of 8 * y / 3 * x is %d \n", 8 * y / 3 * x);
    // By BODMAS the answer was supposed to be 4, but we get 16
    // Here, associativity is checked! (for breaking ties between
    // equal priority operators)
    
     
    return(0);
}