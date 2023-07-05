#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("samplefile.txt", "r");

    // Efficiently reading files.
    while(1){
        char ch = fgetc(ptr);
        if (ch == EOF){
            break;
        }
        else if (ch == '\n'){
            printf("Line break\n");
        }
        else{
            printf("Character read: %c\n", ch);
        }
    }
    return(0);
}