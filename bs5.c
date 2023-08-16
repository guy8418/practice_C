#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void main(){
    //20. To show the result of multiplication and division of two input numbers
    int b201;
    int b202;
    printf("Input two numbers with space");
    scanf("%d %d",&b201,&b202);
    printf("The answer of NO.20 are %d and %d",b201*b202,b201/b202);

    //21. To show OK when input number is more than 4 and less than 21
    int b21;
    printf("Please input integer!");
    scanf("%d",&b21);
    if(b21>4 && b21 <21){
        printf("OK!");
    }

    // 22. To show OK when input is less than -9 or more than 9
    int b22;
    printf("Please input integer");
    scanf("%d",&b22);
    if(b22<-9 || b22>9){
        printf("OK!");
    }

    // 23. To show OK when input is more than -5 and less than 10 else show NG!!
    int b23;
    printf("Please input integer");
    scanf("%d",&b23);
    if(-6<b23 && b23<10){
        printf("OK!");
    }else{
        printf("NG!");
    }

    // 24. To show OK when input is more than -11 and less than 0, or more than 9, else show NG!!
    int b24;
    printf("Please input integer");
    scanf("%d",&b24);
    if((-9<b24 && b24<0)|| b24 > 9){
        printf("OK!");
    }else{
        printf("NG!");
    }



}