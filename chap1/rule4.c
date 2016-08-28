/*************************************************************************
	> File Name: rule4.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月27日 星期六 16时42分46秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct node{
    int a;
    int data[];
};

int main(){

    struct node *test;
    test = (struct node *)malloc(sizeof(int) * 100);
    printf("the %d\n",sizeof(test));



}
