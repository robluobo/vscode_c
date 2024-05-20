//数组名本质上是:数组首元素的地址
//1.sizeof(数组名)，此处的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组中，取出的是整个数组的地址

//数组的地址与数组首元素的地址意义不同
//1.一维数组的数组名
/*
#include <stdio.h>
int main()
{
    int arr1[4]={0};

    int n=sizeof(arr1);

    printf("%p\n",arr1);//1首元素的地址
    printf("%p\n",arr1+1);
    printf("----------------------\n");
    printf("%p\n",&arr1);//2.之间变换的数字是16进制
    printf("%p\n",&arr1+1);//
    printf("-----------------------\n");
    printf("%p\n",&arr1[0]);//3就是首元素的地址
    printf("%p\n",&arr1[0]+1);
    //123打印结果一样
    printf("-----------------------\n");
    printf("%d\n",n);//4

    return 0;
}
*/

//2.二维数组的数组名
#include <stdio.h>

int main()
{
    int arr2[3][4];
    int sz=sizeof(arr2);//总共的字节数的大小

    //二维数组的数组名也是数组首元素的地址
    //首元素的地址不是arr2[0][0];
    //是arr2[0];
    int m=0;
    m=sizeof(arr2)/sizeof(arr2[0]);//总共除以每一行的个数得到行数
    printf("行数%d\n",m);
    printf("------------------------\n");

    int n=0;
    n=sizeof(arr2[0])/sizeof(arr2[0][0]);//每一行的字节总数数除以第一个数据的字节数
    printf("列数%d\n",n);
    printf("-----------------------\n");

    printf("%p\n",arr2);//p取地址。。。。。。
    printf("%p\n",arr2+1);
    printf("-----------------------\n");

    printf("%p\n",arr2[0]);
    printf("%p\n",arr2[0]+1);
    printf("-----------------------\n");

    printf("%d\n",sz);
    return 0;
}









