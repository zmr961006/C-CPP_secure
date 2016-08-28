/*************************************************************************
	> File Name: rule2_1.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月27日 星期六 15时59分08秒
 ************************************************************************/

#include<stdio.h>
#include<complex.h>
#include<math.h>

static inline long labs(long v){
    return v < 0 ?  -v : v;
}

static inline int ilabs(int v){
    return v < 0 ? -v : v;
}

static inline short slabs(int v){
    return v < 0 ? -v : v;
}


#define ABS(v) _Generic(v,long : labs ,\
                          int  : ilabs ,\
                          short: slabs)(v)

void fun(int n){
    int m = ABS(++n);
}

int main(){

    fun(10);
}
