/*************************************************************************
	> File Name: format_3.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月29日 星期一 21时41分21秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>



int main(){

    char user_input[100];

    int a = 0xc;
    int b = 0x02;
    char c[] = "hello";
    printf("the a %x the b %x the c %x\n",&a,&b,c);
    scanf("%s",user_input);
    printf(user_input);
    printf("a =  %d\n",a);
    printf("\n");
    return 0;

}



