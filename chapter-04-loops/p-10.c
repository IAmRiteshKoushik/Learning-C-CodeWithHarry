#include<stdio.h>

int main(){
    //  Check whether a given number is prime or not
    int num;
    printf("Enter a number to check whether it is prime or not :");
    scanf("%d", &num);

    int count = 0;
    for (int i = num; i > 0; i--){
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("The number is a prime number.\n");
    } else
    {
        printf("The number is not a prime number\n");
    }

    return(0);
}