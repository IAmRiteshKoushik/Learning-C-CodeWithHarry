<<<<<<< HEAD
#include<stdio.h>

int main(){
    int rating;
    printf("Enter your rating(1-5)\n");
    scanf("%d", &rating);
    // In switch case, if break is not used then
    // the satisfactory case along with all the 
    // following cases as well as default is 
    // executed
    switch (rating)
    {
    // case 1:
    //     printf("Your rating is 1\n");
    // case 2:
    //     printf("Your rating is 2\n");
    // case 3:
    //     printf("Your rating is 3\n");
    // case 4:
    //     printf("Your rating is 4\n");
    // case 5:
    //     printf("Your rating is 5\n");
    // default:
    //     printf("Your rating is invalid!\n");
    case 1:
        printf("Your rating is 1\n");
        break;
    case 2:
        printf("Your rating is 2\n");
        break;
    case 3:
        printf("Your rating is 3\n");
        break;
    case 4:
        printf("Your rating is 4\n");
        break;
    case 5:
        printf("Your rating is 5\n");
        break;
    default:
        printf("Your rating is invalid!\n");
        break;
    }
    // In break statements are applied then once
    // on of the cases satisfies then the condition
    // is not checked any further!
    return(0);
}
=======
#include<stdio.h>

int main(){
    int rating;
    printf("Enter your rating(1-5)\n");
    scanf("%d", &rating);
    // In switch case, if break is not used then
    // the satisfactory case along with all the 
    // following cases as well as default is 
    // executed
    switch (rating)
    {
    // case 1:
    //     printf("Your rating is 1\n");
    // case 2:
    //     printf("Your rating is 2\n");
    // case 3:
    //     printf("Your rating is 3\n");
    // case 4:
    //     printf("Your rating is 4\n");
    // case 5:
    //     printf("Your rating is 5\n");
    // default:
    //     printf("Your rating is invalid!\n");
    case 1:
        printf("Your rating is 1\n");
        break;
    case 2:
        printf("Your rating is 2\n");
        break;
    case 3:
        printf("Your rating is 3\n");
        break;
    case 4:
        printf("Your rating is 4\n");
        break;
    case 5:
        printf("Your rating is 5\n");
        break;
    default:
        printf("Your rating is invalid!\n");
        break;
    }
    // In break statements are applied then once
    // on of the cases satisfies then the condition
    // is not checked any further!
    return(0);
}
>>>>>>> f53dac51808840395176839785d71f521693ba11
