#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void main(){
    int i;

    //15. Count up by 2 when the number is less than input
    int b15;
    printf("Please input the integer\n");
    scanf("%d",&b15);

    for(i=0; i<=b15; i=i+2){
        printf("%d\n",i);
    }

    // 16. We must input until input number is 0
    int b16;
    bool nonzero = true;
    while(nonzero){
        printf("Please input number\n");
        scanf("%d",&b16);
        if(b16 == 0){
            nonzero = false;
        }
    }

    //17. To show integer array that each element is same as index
    int b17[10];
    for(i=0; i<10; i++){
        b17[i] = i;
        printf("%d\n",b17[i]);
    }

    // 18. To show integer array that each element is same as input
    int b18[10];
    int b182;
    printf("Please input integer");
    scanf("%d",&b182);

    for(i=0; i<10; i++){
        b18[i] = b182;
        printf("%d\n",b18[i]);
    }    

    //19. To show integer array that each elements has the value of each elements
    int b19[5];
    int b192;
    for(i=0; i<5; i++){
        printf("Please input number for %d number of array\n",i);
        scanf("%d",&b192);
        b19[i]= b192;
    }

    for(i=0; i<5; i++){
        printf("%d\n",b19[i]);
    }    

}
