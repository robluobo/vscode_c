

//1.
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
/*
#include <stdio.h>
int main()
{
    int arr1[4]={1,2,3,4};
    int arr2[4]={4,5,6,7};
    int arr3[4]={0};//作为中间交换的值，为了防止数据的丢失
    //最后的结果应该是
    //arr1[4]={4,5,6,7}
    //arr2[4]={1,2,3,4}
    int i=0;

    for ( i = 0; i < 4; i++)
    {
        arr3[i]=arr1[i];
        arr1[i]=arr2[i];
        //arr2[i]=arr3[i];
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    
    return 0;
}
*/


//2.
//创建一个整型数组，完成对数组的操作
//实现函数init（）初始化数组为全0
//实现printf（） 打印数组的每个元素
//实现reverse（）函数完成数组元素的逆置
//

/*
#include <stdio.h>
void init(int arr1[],int sz)
{
    int i=0;
    for ( i = 0; i < sz; i++)
    {
        arr1[i]=0;
    }
    
}


void print(int arr1[],int sz)
{
    int i=0;
    for ( i = 0; i < sz; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
}

//一个错误的逆转程序
//void reverse(int arr1[],int sz,int arr2[])
//{   
//    int i=0;
//    for ( i = 0; i < sz; i++)
//    {
//        arr2[i]=arr1[i];
//        arr1[i]=arr1[sz-i-1];
//    }
//}



//一个逆转的数组
void reverse(int arr1[],int sz)
{   
    int i=0;
    for ( i = 0; i < sz/2; i++)
    {
        int mid=arr1[i];
        arr1[i]=arr1[sz-i-1];
        arr1[sz-i-1]=mid;
    }
}


int main()
{
    int arr1[4]={1,2,3,4};
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    

    print(arr1,sz);

    //init(arr1,sz);

    print(arr1,sz);

    reverse(arr1,sz);
    print(arr1,sz);

    return 0;
}
*/





























