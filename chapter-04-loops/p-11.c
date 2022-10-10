#include<stdio.h>

int main(){
    // Checking for prime number using while loop
    int num;
    printf("Enter a number to check whether it is prime or not :");
    scanf("%d", &num);

    int count = 0;
    int i = num;
    while (i > 0)
    {
        if (num % i == 0)
        {
            count++;
        } 
        i--;
    }

    if (count == 2)
    {
        printf("It is a prime number.\n");
    }
    else
    {
        printf("It is not a prime number.\n");
    }
     
    return(0);
}