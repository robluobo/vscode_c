#include <stdio.h>
#include <string.h>




//1.逗号表达式
/*
int main()
{
    //逗号表达式，结果是最后一个数字
    int arr[10]={1,2,(3,4),5};//相当于是，1，2，4，5
    return ;
}
//去掉数组名字是数组的类型，int[10];
*/




//2.sizeof与strlen的区别
/*
int main()
{
    char str[]="dasd asd";
    //d a s d _ a s d \0
    printf("%d %d\n",sizeof(str),strlen(str));

    //strlen包括空格但是不包括\0
    //sizeof是操作符，计算变量(类型)所占内存空间的大小，单位是字节
    //不关注存放的具体类容

    //strlen是库函数，专门计算字符串长度，只能针对字符串
    //从参数给定的地址一直找\0
    //统计\0之前出现的字符的个数

    return 0;
}
*/


//3.细节的对比
int main()
{
    char a[]="asd";
    //a s d \0，长度是4
    char b[]={"a","s","d"};
    //a s d，长度是3
    //两者的长度不相同
    return 0;
}
