// Calculate the sum of the first n natural numbers
#include<stdio.h>

int sumToN(int terms); // function prototype

int main(){
    int result = sumToN(10);
    printf("The sum is %d", result);
    return(0);
}

int sumToN(int terms){
    int sum = 0;
    if (terms != 0){
        sum = sumToN(terms - 1) + terms;
        terms--;
    }
    return sum;
}