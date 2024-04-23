
//按照逆序输出一遍


//1.0
/*
#include <stdio.h>
#define N 5
int main()
{
    int a[N]={9,6,5,4,1};
    int i=0;
    int temp=0;
    printf("\n original array:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%4d",a[i]);
    }
    for ( i = 0; i < N/2; i++)
    {
        temp=a[i];
        a[i]=a[N-i-1];
        a[N-i-1]=temp;
    }
    printf("\n sorted array:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
*/

//1.3
/*
#include <stdio.h>
#define N 6
int main()
{
    int a[N]={9,6,5,4,1,2};
    int i=0;
    int temp=0;
    printf("\n original array:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%4d",a[i]);
    }
    for ( i = 0; i < N/2; i++)
    {
        temp=a[i];
        a[i]=a[N-i-1];
        a[N-i-1]=temp;
    }
    printf("\n sorted array:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
*/

//2.1and2.2
/*
#include <stdio.h>
int main()
{
    int a[3][3];
    int sum;
    int i=0,j=0;
    printf("please input rectangle element:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        sum=sum+a[i][i];
    }
    printf("duijiaoxian he is %d\n",sum);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int m;
    printf("%d\n",m);
    return 0;
}
*/

//3.0
/*
#include <stdio.h>
int main()
{
    int b[32]={0};
    int x,k,r,i;
    printf("please input a decimal number:");
    scanf("%d",&x);
    printf("\n");
    k=-1;
    do
    {
        r=x%2;//
        b[++k]=r;
        x/=2;
    } while (x>0);
    printf("binary number is :");
    for ( i = k; i >=0; i--)//
    {
        printf("%d",b[i]);
    }
    printf("\n");

    return 0;
}
*/


//在4*4的二维数组中找到最大值
//我的思路是找到每一列中的最大值
//然后将每一列的最大值进行对比得到数组中的最大值


#include <stdio.h>
int main()
{
    int a[4][4]={1,2,3,4,
                 5,6,7,8,
                 7,16,76,1,
                 2,4,5,11};
    int i=0;
    int j=0; 
    int max=a[0][0];
    int one=0;
    int two=0;
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (a[i][j]>max)
            {
                max=a[i][j];
                one=i;
                two=j;
            }
            
        }
    }
    printf("max=a[%d][%d]=%d\n",one,two,max);
    
    return 0;
}




















/*计算字符
#include <stdio.h>
int main()
{
    char a[3][80]={0};
    int i=0;
    int number=0;//数字
    int uppercase=0;//大写字母
    int lowercase=0;//小写字母
    int blank=0;//空格
    int other=0;//其他字符
    int j=0;
    for ( i = 0; i < 3; i++)
    {
        gets(a[i]);
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; a[i][j] !='\0'; j++)
        {
            if (a[i][j]>=48&&a[i][j]<=57)
            {
                number++;
            }
            else if (a[i][j]>=65&&a[i][j]<=90)
            {
                uppercase++;
            }
            else if (a[i][j]>=97&&a[i][j]<=122)
            {
                lowercase++;
            }
            else if (a[i][j]==32)
            {
                blank++;
            }
            else
                other++;
        }
        
    }
    printf("数字%d,大写字母%d,小写字母%d,空格%d,其他字符%d\n",number,uppercase,lowercase,blank,other);


    return 0;
}
*/




//翻译密码
//从密码得到原值
/*
#include <stdio.h>
int main()
{
    char a[20]="R zn z hgfwvmg!";
    int i=0;
    printf("密码是：");
    for ( i = 0; a[i]!=0; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    printf("原文是：");
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]>=65&&a[i]<=90)
        {
            a[i]=64+26-(a[i]-64)+1;
        }
        else if (a[i]>=97&&a[i]<=122)
        {
            a[i]=96+26-(a[i]-96)+1;
        }
        else
            a[i]=a[i];
        printf("%c",a[i]);
    }
    return 0;
}
*/





