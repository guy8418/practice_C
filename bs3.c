#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    //10. the absolute number of the input number
    int b10;
    printf("Input the integer\n");
    scanf("%d",&b10);
    printf("The absolte number is %d\n",abs(b10));

    //11. To show "Hello World!" for 10 times
    char b11[] = "Hello World!\n";
    int i;
    for(i=0; i<10; i++){
        printf(b11);
    }

    //12. To show "Hello World!" for input number times
    int b12;
    int i;
    printf("Please input the number you want to show Hello World!");
    scanf("%d",&b12);
    for(i = 0; i<b12; i++){
        printf("Hello World!\n");
    }

    //13. Rising the number from 0 to input number
    int b13;
    int i;
    printf("Please input positie integer\n");
    scanf("%d",&b13);
    for(i =0; i<=b13; i++){
        printf("%d\n",i);
    }
    
    //14. Count down the number from input nubmber to 0
    int b14;
    int i;
    printf("Please input positie integer\n");
    scanf("%d",&b14);
    for(i = b14; i>=0; i--){
        printf("%d\n",i);
    }
}