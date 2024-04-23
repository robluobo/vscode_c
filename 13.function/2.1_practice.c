//写一个函数可以交换两个整型变量的内容
//第一个示例是一个可以执行的结果正确的代码
#include <stdio.h>

//1.第一个示例代码
/*
void change(int x,int y,int z)//形参
{
    z=x;
    x=y;
    y=z;
    printf("%d,%d\n",x,y);
}


int main()
{
    int inta=0,intb=0;
    int change_number=0;
    scanf("%d,%d",&inta,&intb);
    change(inta,intb,change_number);//实参
    return 0;
}
*/




//为了深入理解函数，下面再写一个代码
//2.第二个示例代码，深入理解
/*
void change(int x,int y,int z)
{
    z=x;
    x=y;
    y=z;
    printf("%d,%d\n",x,y);
}


int main()
{
    int inta=0,intb=0;
    int change_number=0;
    scanf("%d,%d",&inta,&intb);


    change(inta,intb,change_number);//交换数字的函数，实参传给形参
    //以上括号里是实参
    //将实参传给形参的时候，形参将会是实参的一份临时拷贝，修改形参不会改变实参
    printf("%d,%d\n",inta,intb);//可以看到值没有改变
    //在这个程序中，inta，intb，x，y是不一样的变量
    //inta与intb实参
    //x,y,z是形参
    return 0;
}
*/


//3.第三个示例代码，给点灵感的代码段，为第四段代码提供一些思路
/*
int main()
{
    int a=0;
    int *p=&a;
    a=20;//直接更改
    *p=30;//间接更改
    return 0;
}
*/


//4.第四个示例代码--------未完成

void change(int *x,int *y)//存入地址，通过地址寻找a，b，c
{
    int z=0;
    z=*x;
    *x=*y;
    *y=z;
    //printf("%d,%d\n",x,y);
}


int main()
{
    int a=0,b=0;
    int change_number=0;
    scanf("%d,%d",&a,&b);

    change(&a,&b);//寻址符，将地址传过去

    printf("%d,%d\n",a,b);
    return 0;
}























