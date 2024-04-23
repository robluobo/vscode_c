//1.判断素数的函数
#include <stdio.h>
//判断素数的函数
/*
int judge(int n)
{
    int m=0;
    for ( m = 2; m < n; m++)
    {
        if (n%m==0)
        {
            return 0;//0代表能被整除，不是素数
        }
        else if (n==1||n==2)
        {
            return 1;
        }
        else
        {
            return 1;
        }
        
    }
}


int main()
{
    int number=0;

    printf("请输入一个数字：\n");
    scanf("%d",&number);
    int m=judge(number);//创建一个整型变量来接收返回值
    if (m==0)
    {
        printf("%d不是素数\n",number);
    }
    else
    {
        printf("%d是素数\n",number);
    }
    return 0;
}
*/

//2.写一个函数，使得两个字符串连接
/*
void combine(char arr1[],char arr2[],int sz1,int sz2)
{
    int i=0;
    int j=0;
    char arr3[sz1+sz2];//数组的初始化，要么前面给数字，要么后面
    //第一个
    for ( i = 0;arr1[i]!='\0'; i++)
    {
        arr3[i]=arr1[i];
    }
    //第二个
    i=sz1-1;
    for ( j = 0; arr2[j] !='\0'; j++)//在这里容易出错
    {
        arr3[i]=arr2[j];//要记得是数组2从下标0开始
        //但是数组3从下标sz-1开始
        i++;
    }
    //打印
    for ( i = 0; arr3[i]!='\0'; i++)
    {
        printf("%c",arr3[i]);
    }
    printf("\n");
    
}

int main()
{
    char arr1[]="I am ";
    char arr2[]="a student!";
    int sz1=sizeof(arr1)/sizeof(arr1[0]);
    int sz2=sizeof(arr2)/sizeof(arr2[0]);

    combine(arr1,arr2,sz1,sz2);


    return 0;
}
*/



//第八题
//运用递归函数实现：
/*
int function(int a)
{
    if (a>9)//a>9的时候进入if函数
    {
        //假如a的值为1234，那么每次除以10
        //依次为123----123%10=3
        //12----12%10=2
        //1-----1%10=1
        function(a/10);
    }
    printf("%d ",a%10);
   
}

int main()
{
    int a=0;
    printf("请输入一个四位数数字：\n");
    scanf("%d",&a);//
    function(a);
    return 0;
}
*/

//第九题,由低到高的排序
/*
void bubble(int arr[],int sz)
{
    int i=0;
    int j=0;
    for ( i = 0; i < sz; i++)//
    {
        for ( j = 0; j < sz-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];//防止数据丢失
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for ( i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    

}
int main()
{
    int arr[4]={4,3,5,1};
    int sz=sizeof(arr)/sizeof(arr[0]);//
    int i=0;
    //得到数组的长度
    printf("原来数组:\n");
    for ( i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("现在的数组：\n");

    bubble(arr,sz);
    return 0;
}
*/
//





















//3.

#include <stdio.h>
/*
void f(char str[])
{
    int i=0,j=0;
    for ( i=j=0; str[i]  !='\0'; i++)
    {
        if (str[i]!='a')
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    //其中一次for循环中，str[i]=='a'
    //因此不执行if语句，因此结果中没有a
    //在最后一次运行str[9]=='\0'

}

int main()
{
    char string[]="goodbaby";
    f(string);
    printf("string is :%s\n",string);
    return 0;
}
*/


#include <stdio.h>
/*
int a=3;
int b=4;
void fun(int x1,int x2)
{
    printf("%d,%d\n",x1+x2,b);

}
int main()
{
    int a=5,b=6;
    fun(a,b);
    return 0;
}
//传参时传5，6，因此x1+x2=11，由于在fun函数中
//有全局变量b，b=4，因此打印4
*/

/*2.
int main()
{
    int x=0;
    int y=0;
    scanf("%d,%d",&x,&y);
    index(x,y);

    return 0;
}
*/


/*2.
double fun(float x,int y)
{
    int i=1;
    double z=1;
    if (y==0)
    {
        return 1;
    }
    while (i<=y)
    {
        z=z*x;
        i++;
    }
    return z;
}

int main()
{
    float x=0;
    int y=0;
    printf("请输入一个实数和整数：");
    scanf("%f,%d",&x,&y);
    printf("%f的%d次方为:%f\n",x,y,fun(x,y));
    return 0;
}
*/


//3.计算n的阶乘
/*
long mul(int n)
{
    int i=1;
    long sum=0;
    if (n==0)
    {
        return 1;
    }
    else
    {
        sum=1;
    }
    while (i<=n)
    {
        sum=sum*i;
        i++;
    }
    return sum;
    
}
int main()
{
    int y=0;
    printf("请输入一个整数:");
    scanf("%d",&y);
    printf("%d的阶乘为%d\n",y,mul(y));
    return 0;
}
*/

















