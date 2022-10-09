#include<stdio.h>
#include <ctype.h>

int main(){
    // Determine lowecase character.

    // Method 01
    // char only takes the first character of the string
    // char text;
    // printf("Enter a character is lowercase:\n");
    // scanf("%c", &text);

    // // Single line conditions (if-else statements)
    // if (islower(text)) printf("%c is lowercase\n", text);
    // else printf("%c is uppercase\n", text);

    // Method 02
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    // Here we are using the integer equivalent of
    // characters from an ASCII table
    // https://www.asciitable.com/
    if (ch<=122 && ch>=97) {
        printf("it is lowercase\n");
    } else {
        printf("It is not lowecase\n");
    }

    return(0);
}