#include<stdio.h>

void fortune_cookie(char msg[]){
    printf("Message reads: %s\n", msg);
    printf("Message occupied %li bytes\n", sizeof(msg));
}

int main(){
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    return(0);
}

