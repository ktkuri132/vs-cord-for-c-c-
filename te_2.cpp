//二维数组和数组指针
//函数指针和函数指针类型

#include<stdio.h>
#include<string.h>
typedef void(*f_p)();

f_p add(void function())
{
    f_p p=function;
    return p;
}
//指针函数？？？ 
int* fun()
{

}

void print_add(char a[])
{
    printf("%p",&a);
}


struct cat
{
    char name[10];
    int age;
    void cry(char think[999])
    {
        puts(think);   
    }
};

/// @brief 指针の进阶
void (*pa)();    //定义变量：函数指针类型  变量名pa
int (*pb)[];    //定义变量：数组指针类型  变量名pb
void (*pc())(){};   //定义函数：函数指针类型  函数名pc
int (*pd())[1]{};  //定义函数：数组指针类型   函数名pd
void (*pa_f[1])();  //定义数组：函数指针类型   数组名pa_f
//一般的二维数组
int a[][1];
float b[][1];
char c[][1];
int* pa[][1];
char* pc[][1];


void calc_1(void func(char (*pa)[20]))     //传递一个函数，这个函数的参数类型是数组指针
{
    printf("hello world");

}

void print(char (*p_arr)[20])
{
    printf("%s",**p_arr);
}
int main()
{
    
    
}

void jj(){}












