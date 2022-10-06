#include<stdio.h>

int main()
{
    // For calculating the area of the circle
    int radius = 4;
    float pi = 3.14;
    printf("The area of this circle is %f", pi*radius*radius);
    

    // For calculating volume of circle if height is given
    int height = 10;
    printf("\nVolume of cylinder is %f", pi * radius * radius * height);

    return(0);
}

