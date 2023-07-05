#include<stdio.h>

int main(){

    // Adding and withdrawing single characters in File I/O
    FILE *ptr;

    // ptr = fopen("fgetcputc.txt", "w");
    // fputc('c', ptr);
    // fclose(ptr);

    ptr = fopen("fgetcputc.txt", "r");
    char ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    fclose(ptr);


    return(0);
}