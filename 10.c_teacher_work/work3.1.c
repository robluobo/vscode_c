#include <stdio.h>
//第一个程序
/*
void main()
{
    int i=0,j=0;
    for ( i = 3; i >=1; i--)
    {
        for ( j = 1; j <= 2; j++)
        {
            printf("%d\t",j+i);
            printf("\n");
        }
    } 
}
*/


/*第二个程序
void main()
{
    int i=5;
    do
    {
        if (i%3==1)
            if (i%5==2)
            {
                printf("*%d",i);
                
            }
        
        i++;
        break;
    } while (i!=0);
}
*/




//第三个程序
/*
void main()
{
    int n=12345,d=0;
    while (n!=0)
    {
        d=n%10;
        printf("%d\t",d);
        n/=10;
    }
}
*/

/*
//第三个程序改写第一小题
void main()
{
    int n=12345,d=0;
    do
    {
        d=n%10;
        printf("%d\t",d);
        n/=10;
    } while (n!=0);
}
*/



//第三个程序改写第二小题
/*
void main()
{
    int n=12345,d=0;
    for (n=12345;n!=0;n/=10)
    {
        d=n%10;
        printf("%d\t",d);
    }

}
*/


/*
void main()
{
    int a,b,r;
    printf("please input a,b:");
    scanf("%d,%d",&a,&b);
    if (a<b)
    {
        a=b;
    }
    r=a%b;//除数为b，被除数为a
    while (r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("the result is %d\n",b);
}
*/


/*
int main()
{
    int n=0;
    int a,b,c=0;
    printf("输入一个三位数:");
    scanf("%d",&n);//该程序判断n是否为水仙花数
    a=n/100;//百位数
    b=(n/10)%10;//十位数字
    c=n-100*a-10*b;//个位数字
    //printf("%d%d%d\n",a,b,c);
    if (n==a*a*a+b*b*b+c*c*c)
    {
        printf("%d是一个水仙花数字",n);
    }
    else
    {
        printf("%d不是一个水仙花数字",n);
    }
    return 0;
}
*/



//完数的判断------------完成

int main()
{
    int a=0;//本程序要求求得完数，a是要得到的完数，初始化为0
    int j=1;//j的作用是作为被除数，从而得到a的因数
    int n=0;//用于得到因数累加之后的结果，先初始化为0
    for ( a = 1; a < 1001; a++)//从1开始到1000
    {
        n=0;//由于在for循环里，为了防止n一直累加，在第二个循环之前要回到初始值
        for ( j = 1; j <a; j++)//从1开始得到a的因数，比如a=32，j从1到31判断余数是否为0，因此j<a,且j++
        {
            if (a%j==0)//if语句，只有"是a的因数"成立才能进入if语句
            {
                n+=j;//进行因数的累加
			}
        }//注意for语句完成之后j++，也即此时a=j
        if (a==n)//这里判断a是否等于它的因子之和（在这里为了题目要求，因子不包括a本身）
        {
            printf("%d its factors are ",a);
            int m=1;//在这里定义m，是为了求得所有的因子
            for ( m = a-1; m >=1; m--)//由于因子不能包括a本身,所以要a-1（因为最后输出结果因子从大到小排）
            {//要限定m的最低值是1，m的值从a-1到1，因此是m--
                if (a%m==0)//a除以（从a-1到1），来求得因子
                {
                    printf("%d ",m);//每个因子之间空一格
                }
            }
            printf("\n");//换行处理，进行下一个循环
        }
    }
    return 0;
}

