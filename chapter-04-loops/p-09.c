#include<stdio.h>

int main(){
    // While loops - factorial program
    // Calculate factorial
    int fact, result = 1, i = 1;
    printf("Enter number for which factorial has to be calculated :\n");
    scanf("%d", &fact);

    while (i <= fact)
    {
        result *= i;
        i++;
    }
    printf("The resultant factorial is %d\n", result);
    return(0);
}