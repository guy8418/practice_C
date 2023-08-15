/*stdio = standard input/output
標準入出力関係の関数群を記録したライブラリ
ex) キーボードからの入力やファイルの操作など*/ 
#include <stdio.h>

/*stdlib = standard library
型，マクロ，関数が宣言，定義されている
ex) NULL, exit
*/
#include <stdlib.h>

int main (void){
    //0. Show "Hello world!"
    char b0[] = "Hello World!";

    //1. 12345 add to 23456
    int b1 = 12345+23456;

    //2. the remainder of 12345 divided by 7
    float b2 = 12345%7;

    //3. To show the input from keyboard
    int input3;//このように宣言だけできるのはC++のおかげ
    printf("To write the number you want to show as the answer of NO.3\n");
    scanf("%d",&input3);

    //4. To show the input number from keyboard muliplied by 3
    int input4;
    printf("To write the number you want to show multiplied by 3 as the answer of NO.4\n");
    scanf("%d",&input4);
    input4 *= 3;

    printf("The answer to NO.0 is %s\n",b0);
    printf("The answer to NO.1 is %d\n",b1);
    printf("The answer to NO.2 is %f\n",b2);
    printf("The answer to NO.3 is %d\n",input3);
    printf("The answer to NO.4 is %d\n",input4);

    exit(0);
}