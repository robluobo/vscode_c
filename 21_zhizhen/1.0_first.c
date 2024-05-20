//指针
//指针是什么
//指针与指针类型
//野指针
//指针运算

//指针是什么
//指针是内存单元的编号也就是地址
#include <stdio.h>
int main()
{
    int a=0;//a是整型变量，占用四个字节的内存空间，&a是起始地址
    int *pa=&a;//pa是一个指针变量，用来存放地址，通过地址可以找到一根内存单元
    //x86---32位的环境
    //x64---64位的环境
    //
    type();//指针类型
    meaning();//指针类型的意义
    meaning2();//指针类型的意义2
    return 0;
}
//一个内存单元是一个字节
//给内存单元进行编号
//内存单元的编号就是地址，地址也称为指针

//指针的类型
//sizeof的返回值的类型是无符号整型
int type()
{
    char *p1=NULL;
    int *p2=NULL;
    short *p3=NULL;
    double *p4=NULL;


    printf("%zu\n",sizeof(p1));
    printf("%zu\n",sizeof(p2));
    printf("%zu\n",sizeof(p3));
    printf("%zu\n",sizeof(p4));
    return 0;

}

//指针类型的意义1
int meaning()
{
    int a=0x11223344;//16进制
    int *pa=&a;
    *pa=0;
    int b=0x11223344;
    char *pb=(char*)&b;
    *pb=0;
    //
    return 0;
}
//结论：
//指针类型决定了指针在被解引用的时候访问几个字节
//如果是int *的指针，解引用访问四个字节
//如果是char*的指针，解引用访问1个字节
//推广到其他类型

//指针类型的意义2
int meaning2()
{
    int a=0;
    int *m=&a;
    char *n=(char*)&a;
    printf("m=%d\n",m);
    printf("n=%d\n",n);

    printf("m+1=%d\n",m+1);
    printf("n+1=%d\n",n+1);


    return 0;
}












