#include<stdio.h>

int main(){

    // Create a file pointer for accessing the memory of the file
    FILE *ptr;
    ptr = fopen("samplefile.txt", "r");

    // Reading files -- characters only
    // The pointer position is displaced from initial zero index
    // to the first index and then the reading continues. 
    char ch;
    fscanf(ptr, "%c", &ch);
    printf("The character ch is %c\n", ch);
    fclose(ptr);

    // Reading files -- integers only
    ptr = fopen("samplefile.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The number in the file is: %d\n", num);
    fclose(ptr);

    return 0;
}