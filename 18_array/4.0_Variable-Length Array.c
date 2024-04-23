//变长数组,从键盘得到数组的值



#include <stdio.h>
int main()
{
    //在支持变长数组的编译器上，数组的大小可以是变量

    int n=0;//定义一个变量n
    scanf("%d",&n);//从键盘获取n的值
    int arr[n];//变长数组，不能初始化
    //
    int i=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}