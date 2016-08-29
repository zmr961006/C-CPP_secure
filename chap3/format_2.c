/*************************************************************************
	> File Name: format_2.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月29日 星期一 21时23分54秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define SECRET1 0x44
#define SECRET2 0x55

int main(int argc,char ** argv){

    char user_input[100];
    int *secret;

    long int_input;
    int a,b,c,d;

    secret = (int *)malloc(2*sizeof(int));

    secret[0] =  SECRET1;
    secret[1] =  SECRET2;

    printf("the secret 's  address is 0x%8x stack\n",&secret);
    printf("the secret value is 0x%8x heap\n",secret);
    printf("secret[0] address is 0x%8x on heap\n",&secret[0]);
    printf("secret[1] address is 0x%8x on heap\n",&secret[1]);

    
    printf("please enter a decimal intrger\n");
    scanf("%d",&int_input);
    printf("please enter a string \n");
    scanf("%s",user_input);

    printf(user_input);
    printf("\n");

    printf("the original secrets : 0x%x -- 0x%x\n",SECRET1,SECRET2);
    printf("the new secrets:       0x%x -- 0x%x\n",secret[0],secret[1]);
    return 0;


}
