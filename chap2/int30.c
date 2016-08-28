/*************************************************************************
	> File Name: int30.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月28日 星期日 14时28分58秒
 ************************************************************************/

#include<stdio.h>



/*错误实例,这很有可能发生回绕*/

void func(unsigned int ui_a,unsigned int ui_b){

        unsigned int usum = ui_a + ui_b;

}


/*解决方法*/

void func(unsigned int ui_a,unsigned int ui_b){
    
        unsigned int sum;
    if(UINT_MAX - ui_a < ui_b){
        /*handle error*/
    }else{
        usum = ui_a + ui_b;
    }

    /*.......*/
}
