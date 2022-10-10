#include<stdio.h>

int main(){
    // Calculate factorial
    int fact, result = 1;
    printf("Enter number for which factorial has to be calculated :\n");
    scanf("%d", &fact);

    for (int i = 1; i <= fact; i++) {
        result *= i;
    }

    printf("The factorial of %d is %d\n", fact, result);

    return(0);
}