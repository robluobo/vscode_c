#include <stdio.h>
#include <string.h>//记录字符串长度的头文件
#include <windows.h>//时间间隔的头文件
#include <stdlib.h>//清空屏幕的头文件
//第一个程序，求n的阶乘
/*
int main()
{
    int cycle_index=1;//循环次数
    int target_n=0;//目标n
    int factorial=1;//阶乘结果
    scanf("%d",&target_n);//输入你想求得的n的阶乘
    while (cycle_index<=target_n)
    {
        factorial=factorial*cycle_index;
        cycle_index++;
        
    }
    printf("%d\n",factorial);



    return 0;
}
*/

//第二个程序，求阶乘的和
/*
int main()
{
    int cycle_index=1;//循环次数
    int target_n=0;//目标n
    int factorial=1;//阶乘结果
    int i=0;
    int add_factorial=0;
    scanf("%d",&target_n);//输入你想求得的n的阶乘的和
    for ( i = 1; i <=target_n; i++)
    {
        while (cycle_index<=i)
        {
            factorial=factorial*cycle_index;
            cycle_index++;
            
        }
        printf("%d\n",factorial);
        add_factorial=factorial+add_factorial;

    }
    printf("%d\n",add_factorial);
    return 0;
}
*/

//第三个程序,优化版本求阶乘的和
/*
int main()
{
    int target_n=0;
    int i=0;
    int factorial=1;
    int add_factorial=0;
    scanf("%d",&target_n);
    for (i = 1; i <=target_n; i++)
    {
        factorial=factorial*i;
        add_factorial=add_factorial+factorial;
    }
    printf("%d\n",add_factorial);
    return 0;
}
*/


//第四个程序，在一个有序数组中查找某个数字n(二分法查找？)
/*
int main()
{
    int integer_array[]={1,2,3,4,5,6,7,8,9};
    int k=7;//在一个有序数组中查找具体的某个数字n
    scanf("%d",&k);
    int i=0;
    for ( i = 0; i <(sizeof(integer_array)/sizeof(integer_array[0])); i++)
    {
        if(integer_array[i]==k)
        {
            printf("%d,%d\n",integer_array[i],i);
            break;
        }
    }
    return 0;
}
*/

//第五个程序，优化第四个程序,二分法
/*
int main()
{
    int integer_array[]={1,2,3,4,5,6,7,8,9};
    int n=7;
    int size=sizeof(integer_array)/sizeof(integer_array[0]);
    int i=0;
    //integer_array[size]中size表示的是数组中元素的个数
    int left=0;//左下标
    int right=size-1;//右下标等于元素个数减1
    while (left<=right)
    {
        int mid=(left+right)/2;//中间元素下标
        if (integer_array[mid]<n)
        {
            left=mid+1;
        }
        else if (integer_array[mid]>n)
        {
            right=mid-1;
        }
        else
        {
            printf("找到下标为%d\n",mid);
            break;
        }
    }
    if (left>right)

    {
        printf("找不到");
    }
    
    return 0;
}
*/

//第六个程序：编写代码，演示多个字符从两端移动，向中间汇聚
/*
int main()
{
    char arra1[]="you are a stupid boy/girl";
    char arra2[]="#########################";
    int i=0;
    int size=sizeof(arra1)/sizeof(arra1[0]);
    //int size1=strlen(arra1);
    //int left=
    for ( i = 0; i <size/2; i++)
    {
        arra2[i]=arra1[i];
        arra2[size-i-2]=arra1[size-i-2];
        //减去2，是因为字符串的末尾有/0，size并不是真正的元素的个数，比如
        //char arr[]="asc";
        //int size2=sizeof(arr)/sizeof(arr[0]);
        //size2=4而不是3;因此可用strlen来计算字符串个数
        printf("%s\n",arra2);
    }
    return 0;
}
*/


//第七个程序，仍然是演示多个字符从两端移动，向中间汇聚，while版本
/*
int main()
{
    char arra1[]="you are a stupid boy/girl";
    char arra2[]="#########################";
    int i=0;
    int size1=strlen(arra1);
    //根据二分法得到的方法，使用left与right
    int left=0;//左边下标
    int right=size1-1;//右边下标
    while (left<=right)
    {
        arra2[left]=arra1[left];//替换的过程1
        arra2[right]=arra1[right];//替换的过程2
        printf("%s\n",arra2);
        Sleep(1000);//单位是毫秒，间隔1000ms之后再执行下一条命令，注意头文件
        system("cls");//system是一个库函数，可以执行系统命令，清空屏幕，注意头文件
        left++;
        right--;
    }
    
    return 0;
}
*/

//第八个程序：编写代码实现，模拟用户登录情景，并且只能登录三次
//只允许输入三次密码，如果密码正确则提示登录成功，如果三次都输入错误，则退出程序
/*
int main()
{
    int i=0;
    char code[20]={0};//用来存放你的密码
    for ( i = 0; i < 3; i++)
    {
        printf("请输入密码：\n");
        scanf("%s",code);//不需要取地址符号，数组本身就是地址
        if (strcmp(code,"abcde")==0)//返回值等于0，说明两个字符串相等,注意头文件string.h
        //if (code=="asdasdw")
        //比较两个字符串是否相等不能使用==，应该使用库函数strcmp
        {
            printf("输入正确");
            break;//输入正确直接跳出循环
        }
        else
        {
            printf("密码错误");
        }

        
    }
    if (i==3)//i=3的时候就跳出循环
    {
        printf("三次密码均输入，你已经没有机会了\n");
    }
    
    return 0;
}
*/


//第九个程序：猜数字游戏
//电脑产生一个随机数（1-100），猜数字，反馈猜大猜小，猜对结束，提供菜单可再来
/*
void menu()
{   
    


}
*/
/*
int i=0;
void again()
{
    printf("0继续玩,3不玩\n");
    scanf("%d",&i);

}

void guess()
{
    int computer_produce=97;
    int guess=0;
    for (i = 0; i < 3; i++)
    {
        printf("你想猜的数字：\n");
        scanf("%d",&guess);
        if (computer_produce==guess)
        {
            printf("猜对啦嘻嘻");
        }
        else
        {
            if (computer_produce>guess)
            {
                printf("猜小了");
            }
            else
            {
                printf("猜大了");
            }
            
        }
    }
    if (i==3)
    {
        printf("呵呵没有机会了不好意思啊\n");
    }


}
int main()
{
    guess();
    again();
    if (i==0)
    {
        guess();
    }     
    return 0;
}
*/








































