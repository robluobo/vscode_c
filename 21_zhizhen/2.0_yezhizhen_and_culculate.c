#include <stdio.h>



int main()
{
    //wild();//野指针1
    //ask();//野指针2--指针越界访问
    //int *p=test();//野指针3
    //solve();
    int *pm=NULL;//0
    //0地址不能访问？？
    //*pm=100;//0地址不能访问，为error
    if (pm!=NULL)
    {
        *pm=100;
    }
    printf("%d\n",*pm);
    return 0;
}



//野指针1
//指针指向的位置不可知（随机的，不正确的）
/*
int wild()
{
    int *p;//p没有初始化，没有明确的指向
    *p=10;//非法访问内存，因为p没有初始化，p为野指针,会显示出错误
    //一个局部变量不初始化放的是随机值
    return 0;
}
*/

//野指针2-指针越界访问
/*
int ask()
{
    int arr[10]={0};
    int *p=arr;//&arr[0]==arr
    int i=0;
    for ( i = 0; i <=10; i++)
    {
        *p=1;
        p++;
    }
    
    return 0;
}//当指针指向的范围超出数组arr的范围
//时，p也是野指针
*/

/*
//野指针3
int* test()
{
    int a=10;
    return &a;//在test中创建的局部变量，在函数结束之后，此变量会销毁
}
*/

//防止野指针的解决方法
int solve()
{
    int *pm=NULL;//0
    //0地址不能访问？？
    //*pm=100;//0地址不能访问，为error
    if (pm!=NULL)
    {
        *pm=100;
    }
    printf("%d\n",*pm);


    return 0;
}

