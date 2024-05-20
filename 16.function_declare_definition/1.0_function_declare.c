//函数的声明与定义


/*
int add(int x=1)//错误提示，参数中不能赋值
{
    printf("sd");


    return 0;
}


#include <stdio.h>
int main()
{
    int n=0;
    add(n);

    return 0;
}
*/




//由于要调用的函数在后面，因此要进行函数声明
//
int add(int x);//或者int add(int);函数的声明
//函数声明一般放在头文件？？？？？？
//

#include <stdio.h>
int main()
{
    int n=0;
    add(n);
    return 0;
}

int add(int x)
{
    printf("sd");
    return 0;
}

