//自定义函数
#include <stdio.h>
/*ret_type----------返回类型*/
/*function_name-------函数名*/
/*paral-----------函数参数(0或者多个)*/

//函数的定义
int get_max(int a,int b)
{
    //x>y?x:y;
    return (a>b?a:b);//返回值为整型，因此使用int
}


void test()
{
    printf("sda");//没有返回值，使用void
}



int main()
{
    int x=0,y=0;
    scanf("%d,%d",&x,&y);
    int max=get_max(x,y);
    printf("%d\n",max);
    return 0;
}

































































