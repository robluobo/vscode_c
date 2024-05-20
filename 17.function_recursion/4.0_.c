//斐波那契数列
//前两个数字加起来等于第三个数字
//写一个代码求第n个斐波那契数字
//或者写一个代码求1000之内的斐波那契数字？





//1.第一个程序求斐波那契数列，不用递归方法
/*
#include <stdio.h>
int main()
{
    int fib=0;

    int n=1;
    int j=0;

    while(fib<=1000)
    {
        fib=n+j;
        j=n;
        n=fib;
        if (fib>1000)
        {
            return 0;
        }
        else
        {
            printf("%d ",fib);
        }
    } 
    return 0;
}
*/


#include <stdio.h>
//2.求斐波那契数列用递归方法
/*
int fibonacci(int fib2,int m2,int n2)
{
    fib2=m2+n2;
    if (fib2<1000)
    {
        fibonacci(fib2,fib2,m2);
    }
    else
    {
        return 0;
    }
    printf("%d ",fib2);

}

int main()
{
    int fib=0;
    int n=0;
    int m=1;
    fibonacci(fib,m,n);


    return 0;
}
*/






























































//0+1=1;  1=1+0
//1+1=2;  2=1+1
//1+2=3;  3=2+1
//2+3=5;  5=3+2