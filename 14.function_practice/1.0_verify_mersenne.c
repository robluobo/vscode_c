//先写一个判断1000-2000的素数
//再写一个判断1000-2000的素数的函数

//1.第一个任务
/*
#include <stdio.h>
int main()
{
    int tar_num=0;//所要求得的目标数字
    int judg_tool=0;//作为判断工具的数字
    int flag=1;//等于0不是素数，等于1为素数，作为判断
    for ( tar_num = 1000; tar_num < 2001; tar_num++)//从1000开始到2000
    {
        flag=1;//这里非常重要，因为在下一个for循环里，一旦其中的if语句成立
        //会导致flag=0，如果没有这个语句，在整个循环里，flag会一直等于0
        //那么会导致没有素数的出现；
        for ( judg_tool = 2; judg_tool < tar_num; judg_tool++)//根据素数的判断条件
        {
            if (tar_num%judg_tool==0)//被整除不是素数
            {
                flag=0;//
                break;
            }
            
        }
        if (flag==1)
        {
            printf("%d\n",tar_num);
        }
    }
    return 0;
}
*/



//1.1 .仍然是第一个任务，但是改良版本
/*
如果一个数字m，m=a*b
a与b一定小于m开平方
*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int tar_num=0;//所要求得的目标数字
    int judg_tool=0;//作为判断工具的数字
    int flag=1;//等于0不是素数，等于1为素数，作为判断
    for ( tar_num = 1000; tar_num < 2001; tar_num++)//从1000开始到2000//可以优化，偶数一定不是素数
    {
        flag=1;//这里非常重要，因为在下一个for循环里，一旦其中的if语句成立
        //会导致flag=0，如果没有这个语句，在整个循环里，flag会一直等于0
        //那么会导致没有素数的出现；
        for ( judg_tool = 2; judg_tool <= sqrt(tar_num); judg_tool++)//根据素数的判断条件
        {
            if (tar_num%judg_tool==0)//被整除不是素数
            {
                flag=0;//
                break;//只要有成立，一定不是素数，直接退出不用百分百每次都完成循环
            }
            
        }
        if (flag==1)
        {
            printf("%d\n",tar_num);
        }
    }
    return 0;
}
*/










//2.第二个任务

#include <stdio.h>
#include <math.h>
int judgement(int tar_num2)
{
    int judg_tool2=0;
    for (judg_tool2 = 2; judg_tool2 < sqrt(tar_num2); judg_tool2++)
    {
        if (tar_num2%judg_tool2==0)
        {
            return 0;//返回值是0则表明不是素数，后面不用break语句，return之后就是结束
        }
    }
    return 1;
}
int main()
{
    int tar_num=0;//所要求得的目标数字
    int judg_tool=0;//用于计算素数的个数
    for ( tar_num = 1000; tar_num < 2001; tar_num++)
    {
        if (judgement(tar_num))//直接传入数字判断，返回值是0则不是素数
        {
            printf("%d\n",tar_num);
            judg_tool++;
        }
    }
    printf("%d\n",judg_tool);
    return 0;
}



























