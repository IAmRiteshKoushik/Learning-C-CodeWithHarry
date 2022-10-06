#include<stdio.h>
// Stdio.h is "Standard Input Output" library which provides functions
// such as printf, scanf etc..
// There are no inbuilt functions in C language.
#include<math.h>

int main()
{
    int a = 4;
    int b = 9;
    
    printf("The value of a + b is : %d\n", a + b);
    printf("The value of a - b is : %d\n", a - b);
    printf("The value of a * b is : %d\n", a * b);
    printf("The value of a / b is : %d\n", a / b);
    
    int z;
    z = b * a; // legal
    // b * a = z; // illegal
    printf("The value of z is : %d\n", z);
    
    printf("5 when didivded by 2 leaves a remainder of %d\n", 5%2);
    printf("-5 when didivded by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when didivded by -2 leaves a remainder of %d\n", 5%-2);

    // No operator is assumer to be present
    // printf("The value of 4 * 5 is %d\n", (4)(5)); // ERROR (as there is not multiplication operator is stated)

    // There is no operator to perform exponentiation in C
    printf("The value of 4 ^ 5 is not %d\n", 4 ^ 5) ;
    // Will not produce 4 power 5, this is BITWISE XOR operator
    // For carrying out exponentation #include<math.h> and the pow(x,y)
    printf("The value of 4 ^ 5 is not %f\n", pow(4, 5)) ;
    // This returns a double, not a integer (so we must use %f)



    return(0);
}