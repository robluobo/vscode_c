//编写函数不允许创建临时变量，求字符串的长度(用递归的方法)
#include <stdio.h>
//1.使用临时变量，调用函数的方法
/*
int get_st(char *p)//==int get_st(char arr[])
{
    int count=0;//临时变量
    int count2=0;
    while (*p!='\0')//遇到\0就结束//注意后面\0要用单引号，是字符
    {
        count++;
        p++;//也是不太明白这里的p装的是地址，能够++？？？
        
    }
    return count;
}

int main()
{
    char array[]="asdawads";
    int m=get_st(array);

    printf("%d\n",m);

    return 0;
}
*/


//2.不使用临时变量的方法，使用递归的方法计算数组中字符串的长度
/*
int get_st(char *m)//由于传入数组，用指针变量
{
    if (*m!='\0')
    {
        return 1+get_st(m+1);
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    char arr[]="adswdasd";//定义的数组
    int get=get_st(arr);//用get接受返回值

    printf("%d\n",get);//打印返回值

    return 0;
}
*/































