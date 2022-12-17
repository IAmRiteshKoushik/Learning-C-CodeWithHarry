// Celcius to Farenheit
#include<stdio.h>

float conv_c_to_f(float c){
    return ((c * 9/5) + 32); // -40
}

// The below function does not work as in C the variables should
// before the operands
// float conv_c_to_f_2(float c){
//     return (9/5 * c + 32); // -8
// }

int main(){

    float result = conv_c_to_f(-40.0);
    printf("The given temperature in Farenheit is %f", result);

    return(0);
}

// #include <stdio.h>

// int main()
// {
//     float celsius, fahrenheit;

//     /* Input temperature in celsius */
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);

//     /* celsius to fahrenheit conversion formula */
//     fahrenheit = (celsius * 9 / 5) + 32;

//     printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

//     return 0;
// }