/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2016年08月29日 星期一 18时53分40秒
 ************************************************************************/

#include<stdio.h>


struct flex_array_struct{

    size_t num;
    int data[];

};


void fun(){
    
    struct flex_array_struct flex_struct;
    size_t array_size = 4;

    flex_struct.num = array_size ;
    
    for(size_t i = 0,i < array_size;++i){
                                /*栈上的空间中data成员没有保留任何空间，访问是未定义行为*/
        flex_struct.data[i] = 0;

    }

}


void fun(struct flex_array_struct * struct_a ,struct flex_array_struct * struct_b){
    
        *struct_b  = *struct_a;     /*复制结构时并没有复制灵活成员*/


}


void print_array(struct flex_array_struct struct_p){
    
        printf("%d ",struct_p.data[i]);   /*实参传递时没有复制灵活数组*/

}


