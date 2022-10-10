#include<stdio.h>

int main(){
    // initializing variables
    int sum1 = 0, sum2 = 0, i = 1;

    // sum of first ten natural numbers using for loop
    for (i = 1; i < 11; i++) {
        sum1 += i;
        printf("Current value of the sum variable is %d after adding %d\n", sum1, i);
    }
    
    // sum of first 10 natural numbers using while loop
    do
    {
        sum2 += i;
        printf("Current value of the sum variable is %d after adding %d\n", sum2, i);
        i++;
    } while (i < 11);
    
    return(0);
}