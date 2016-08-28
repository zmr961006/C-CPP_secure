/*************************************************************************
	> File Name: rule1.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月27日 星期六 15时44分46秒
 ************************************************************************/

#include<stdio.h>


/*此结果未定义*/

#define assign(uc1,uc2,val) uc1##uc2 = val 

void func(){

    int u0401;

    assign(u04,01,4);

    printf("u0401 = %d\n",u0401);
}

int main(){

    func();

}
