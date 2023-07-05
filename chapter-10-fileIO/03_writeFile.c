#include<stdio.h>

int main(){

    // This is how you write to a file. The file gets created if it
    // does not exist already. It also truncates previously entered
    // data that exists in the file. 
    FILE *ptr;
    ptr = fopen("writeFile.txt", "w");
    int i = 90;
    fprintf(ptr, "%d", i);
    fclose(ptr);

    return(0);
}