/*************************************************************************
	> File Name: int31.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月28日 星期日 14时59分47秒
 ************************************************************************/

#include<stdio.h>



void fun(){

    unsigned long int u_a = local_max;
    signed char sc;        
    sc = (signed char)u_a;      /*无符号转为有符号造成截断错误*/

}

void fun(){                     /*有符号转换为无符号造成符号丢失*/ 

    signed int si = INT_MIN;
    unsigned int ui = (unsigned int )si;
}

void fun(){                     /*数据截断导致精度损失*/

    signed long int s_a =  LONG_MAX;
    signed char sc = (signed char)s_a;

}

void time_test(){
    
    time_t now = time(NULL);
    if(now != (time_t)-1){
        /*do something*/
    }

}
