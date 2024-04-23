//函数的链式访问：将函数的返回值作为其他函数的参数
//函数不写返回值的时候，默认返回值类型是int
//介绍一些函数的特点

/*
add(int x)
{
    printf("dsd");
    return x;//默认返回值是int类型
}



int dd(int x)//此函数有返回类型是int
{
    printf("dsd");//由于最后一句没有return语句
    //在某些编译器上会默认返回的是函数执行过程中最后一条指令执行的结果
}



void add(void)//可以在括号里加void，明确说明不需要参数
{
    printf("dsd");
    return x;
}
*/



#include <stdio.h>
int main(void)//明确表明main函数不需要传参，实际上main函数有三个参数，后面了解
{
    //比如
    printf("%d",printf("%d",printf("%d",43)));//
    //printf的返回值值字符的个数，43是两个字符，打印2，2是一个字符，打印1
    return 0;
}
















