//判断1000到2000年之间的闰年
//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。 世纪闰年
//公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）


//1.第一个程序，写一个判断闰年的程序
/*
#include <stdio.h>
int main()
{
    int year=0;
    int tool=0;
    for ( year = 1000; year < 2001; year++)
    {
        if (year%4==0&&year%100!=0)
        {
            printf("%d\n",year);
        }
        else if (year%400==0)
        {
            printf("%d\n",year);
        }
        
    }
    return 0;
}
*/


//1.1 .写一个判断闰年的程序，但是改良版
/*
#include <stdio.h>
int main()
{
    int year=0;
    int tool=0;
    for (year = 1000; year < 2001; year++)
    {
        if (year%4==0&&year%100!=0||year%400==0)
        {
            printf("%d\n",year);
        }
    }
    return 0;
} 
*/


//2.写一个判断闰年的函数


int leap_year(int i)
{
    if (i%4==0&&i%100!=0||i%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#include <stdio.h>
int main()
{
    int year=0;
    int tool=0;
    for (year  = 1000; year< 2001; year++)
    {
        if (leap_year(year))//是
        {
            printf("%d\n",year);
        }
    }
    return 0;
}













