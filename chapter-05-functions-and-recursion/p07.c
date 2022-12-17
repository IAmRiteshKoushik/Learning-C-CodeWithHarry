// Pattern printing
// *
// * * *
// * * * * *
// * * * * * * *
// nth line -> 2n+1 stars
#include<stdio.h>

void pattern(int line);

int main(){
    pattern(7);
    return(0);
}

// void pattern(int line){
//     if (line == 1){
//         printf("*\n");
//     }
//     else
//     {
//         for (int i = line ; i > 0; i--){
//             printf("*");
//         }
//         printf("\n");
//         pattern(line-1);
//     }
//     return;
// }


void pattern(int line){
    if (line == 1){
        printf("*\n");
        return;
    }
    // Execute the recursion function before or else the stars print in reverse

    pattern(line-1);
    for (int i = 0; i < (2*line-1); i++){
        printf("*");
    }
    printf("\n");
    
}