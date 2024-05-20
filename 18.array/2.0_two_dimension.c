//二维数组
//1.二维数组初始化
//2.数组打印
//3.数组的数值的更改
//4.数组存放
//5.数组越界






//
//1.二维数组的初始化
/*
#include <stdio.h>
int main()
{
    //创建
    int arr[3][4];//三行四列
    char arr2[3][4];

    //
    int arr3[3][4]={1,2,3,4,5,6,7};
    //1,2,3,4
    //5,6,7,0
    //0,0,0,0

    int arr4[3][4]={{1,2},{3,4},{5,6}};//分组,不完全初始化
    //1,2,0,0
    //3,4,0,0
    //5,6,0,0

    int arr5[][4]={{1,2,3},{2,3}};//不能省略列，可以省略行

    return 0;
}
*/

//行与列都从0开始，下标访问
//2.打印二维数组中的数字
/*
#include <stdio.h>
int main()
{
    int arr1[3][4]={1,2,3,4,5,6};
    int i=0;
    int j=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/


//3.修改二维数组中的数字???
/*
#include <stdio.h>
int main()
{
    int arr2[3][4]={1,2,3,4,5,6,7};
    int i=0;
    int j=0;
    for ( i = 0; i < 3 ;i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/




//4.二维数组的存储？？？？
//一维数组的数组
/*
#include <stdio.h>
int main()
{
    int arr1[3][4]={1,2,3,4,5,6};
    int i=0;
    int j=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("&arr[%d][%d]=%p\n",i,j,&arr1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/
//也为连续存放


//5.数组越界（超过范围，不作展示）
/*
#include <stdio.h>
int main()
{

    return 0;
}
*/

//6.数组作为函数参数(学习冒泡排序法)
//数组传参，形参有两种写法
//1.数组形式
//2.指针形式

//1.数组形式
/*
#include <stdio.h>
void bubble_sort(int arr2[],int sz2)//
{
    int i=0;
    int j=0;//9
    int n=0;
    for ( i = 0; i < sz2-1; i++)
    {
        for ( j = 0; j < sz2-1; j++)
        {
            if (arr2[j]>arr2[j+1])
            {
                int m=0;
                m=arr2[j+1];
                arr2[j+1]=arr2[j];
                arr2[j]=m;
            }
            
        }
    }
    int m=0;
    for ( m = 0; m < sz2; m++)
    {
        printf("%d ",arr2[m]);
    }
    
}

int main()
{
    //降序改为升序
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    //冒泡排序的算法对数组进行排序
    int sz=sizeof(arr)/sizeof(arr[0]);//10
    bubble_sort(arr,sz);



    return 0;
}
//冒泡排序
//两个相邻的元素进行比较
//9，8，7，6，5，4，3，2，1，0
//8，9，7，，，
//8，7，9，6，，，
//。。。。
//最后是
//8，7，6，5，4，3，2，1，0，9
//然后进行下一轮
//其中共有10个元素，宏观来看需要进行9次
//每一次又需要进行不同次数的排序
*/













