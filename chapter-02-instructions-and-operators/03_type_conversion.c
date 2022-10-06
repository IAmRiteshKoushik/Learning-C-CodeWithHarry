#include<stdio.h>

int main()
{
    // Int operator Int = Int
    // Int operator Float = Float
    // Float operator Float = Float
    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
    return(0);

    // It is better to not induce ambiguity by writing
    // int c = 3.5 (it only captures 3)
    // As this may create compiler errors sometimes
}