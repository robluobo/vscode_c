//写一个函数，实现一个整形有序数组的二分法查找


//1.普通版本，是一个错误版本，关于函数传参传数组时
/*
#include <stdio.h>
int find(int x[],int tar)
{
    int size=sizeof(x)/sizeof(x[0]);//x实际上是指针变量，通过数组首元素地址找其他
    //传递的首元素的地址
    //
    //在这里警告
    //'sizeof' on array function parameter 'x'
    //will return size of 'int *'
    //[-Wsizeof-array-argument]g
    //C/C++中如果一个函数接受一个数组作为参数，那么数组将会被退化为指针
    //因此应该在main函数中将数组的长度求出
    //不能在函数内部计算一个函数参数部分的数组元素的个数
    //
    int left=0;
    int right=size-1;
    int mid=0;
    while (left<=right)
    {
        mid=(left+right)/2;
        if (x[mid]<tar)
        {
            left=mid+1;
        }
        else if (x[mid]>tar)
        {
            right=mid-1;
        }
        else
        {
            return mid;
        }
    }
    if (left>right)
    {
        return -1;
    }
    
}

int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    int target=4;
    int back=find(array,target);//找到返回下标，找不到返回-1???
    //用back接受返回值
    if (back!=-1)
    {
        printf("%d\n",array[back]);
    }
    else
    {
        printf("没有\n");
    }
    return 0;
}
*/



//1.2 .下面是一个正确的程序
/*
#include <stdio.h>
int find(int x[],int tar,int size2)//x实际上是指针变量，通过数组首元素地址找其他
{
    int left=0;
    int right=size2-1;
    int mid=0;
    while (left<=right)
    {
        mid=(left+right)/2;//为了防止溢出（因为数据范围有限）???????
        if (x[mid]<tar)
        {
            left=mid+1;
        }
        else if (x[mid]>tar)
        {
            right=mid-1;
        }
        else
        {
            return mid;
        }
    }
    if (left>right)
    {
        return -1;
    }   
}

int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    int target=8;
    int size=sizeof(array)/sizeof(array[0]);
    int back=find(array,target,size);//找到返回下标，找不到返回-1???
    //用back接受返回值
    if (back!=-1)
    {
        printf("%d\n下标是%d\n",array[back],back);
    }
    else
    {
        printf("没有\n");
    }
    return 0;
}
*/


















































