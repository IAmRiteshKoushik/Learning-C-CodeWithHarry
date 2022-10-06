#include<stdio.h>

int main()
{
    float length, breadth;
    printf("Calculating the area of a rectangle\n");

    printf("Enter the length of the rectangle-");
    scanf("%f", &length);
    printf("\nEnter the breadth of the rectangle-");
    scanf("%f", &breadth);
    
    printf("The area of the rectangle is %f", length * breadth);

    return(0);
}