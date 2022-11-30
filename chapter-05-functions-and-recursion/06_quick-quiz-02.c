#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);

    // Pow returns a double type and not an int type so we have to use %f specifier
    printf("The value of area is %f", pow(side, 2));
    return(0);
}