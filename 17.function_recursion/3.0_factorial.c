//使用递归的办法计算n的阶乘

#include <stdio.h>
int n_factorial(int n2)
{
    if (n2<=1)
    {
        return 1;
    }
    else
    {
        return n2*n_factorial(n2-1);
    }
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int res=n_factorial(n);
    printf("%d\n",res);
    return 0;
}



























