#include <stdio.h>
#include <stdlib.h>

void main(){
    // //5. The addition, subtraction, multiplication, division of 2 input numbers
    // int b51;
    // int b52;
    // printf("Please input two numbers separeted by space key\n");
    // scanf("%d %d",&b51,&b52);
    
    // printf("The answer to NO.5 are below\n");
    // printf("\t The sum is %d\n",b51 + b52);
    // printf("\t The difference is %d\n",b51 - b52);
    // printf("\t The product is %d\n",b51 * b52);
    // printf("\t The quotient is %d\n",b51 / b52);
    // printf("\t The remainder is %d\n",b51 % b52);

    //6,7. To show zero if the input is 0  else show nonzero
    int b6;
    printf("Please input one integer\n");
    scanf("%d",&b6);
    if(b6 == 0){
        printf("zero\n");
    }else{
        printf("nonzero\n");
    }

    /*8,9. To show positive if the input is more than 0
        to show negative if the input is less than zero
        else show zero*/
    int b8;
    printf("Please input one integer\n");
    scanf("%d",&b8);
    if(b8 == 0){
        printf("zero\n");
    }if(b8 < 0){
        printf("negative\n");
    }else{
        printf("positive\n");
    }

    exit(0);
}