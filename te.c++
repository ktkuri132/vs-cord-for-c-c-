//C语言脱裤子放屁之装饰器    用法1
#include<stdio.h>

void func_hat_1(int (*func)(int a,int b),int a,int b)
{
    printf("这是加法\n");
    int res=func(a,b);
    printf("%d\n",res);
}

void func_hat_2(int func(int a,int b),int a,int b)
{
    printf("这是加法哦！！\n");
    int res=func(a,b);
    printf("%d",res);
}

//说明(*func) and func 的效果是一样的，作用都是往函数里面输入函数的地址，一种理解是以指针的形式解引用得到函数，一种是直接传入函数地址
//其实用不着这么麻烦，直接函数嵌套调用就行了

//两者传入参数类型都是函数指针类型

int add(int a,int b)
{
    return a+b;
}



int main()
{
    int a;
    int b;
    printf("输入两个数：");
    scanf("%d %d",&a,&b);
    func_hat_1(add,a,b);
    func_hat_2(add,a,b);
    
}
//用法2


void (*func_point_arr[10])();  //函数指针数组