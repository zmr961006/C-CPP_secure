/*************************************************************************
	> File Name: rule3.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月27日 星期六 16时19分38秒
 ************************************************************************/

#include<stdio.h>


void func(const char * src){

    char *dest;
    memcpy(dest,src,
        #ifdef A
          12
        #else 
          13
        #endif);

}
