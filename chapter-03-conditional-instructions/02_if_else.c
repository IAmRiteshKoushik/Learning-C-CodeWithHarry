#include<stdio.h>

int main(){
    // C program to check driving eligibility of a person
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 90 || age < 18) 
    {
        printf("You cannot drive as you are either above 90 or below 19\n");
    }else
    {
        printf("You can drive\n");
    }
    return(0);
}