// Fibonacci Series - 1, 1, 2, 3, 5, 8, 13, (next number is sum of previous numbers)
#include<stdio.h>

int fibonacci(int terms);

int main(){
    int terms = 0;
    printf("Enter the number of terms:");
    scanf("%d", &terms);
    int result = fibonacci(terms);
    printf("The %dth term of the series is :%d", terms, result);
    return(0);
}

int fibonacci(int terms){
    int term1 = 1;
    int term2 = 1;
    int sum = 0;
    for (int i = 3; i < terms+1; i++){

        // Need to update one variable and add term
        sum = term2 + term1; // Upcoming term created
        term1 = term2; // term1 shifted by one place
        term2 = sum; // term2 updated based on fibonacci series
    }
    return term2;
}