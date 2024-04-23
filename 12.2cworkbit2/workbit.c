#include <stdio.h>

int main()
{
    int year,month,day;
    scanf("%4d%2d%2d",&year,&month,&day);
    if(year<=2015&&year>=1990)
    {
        printf("year=%4d\nmonth=%02d\nday=%02d",year,month,day);//%02d的使用，在前面补齐0；
    }
    return 0;
}


/*
int main()
{

    float number1=0.0;//默认为double类型
    float number2=0.0f;//表示为float类型
    return 0;
}
*/


/*
int main()
{
    int number=printf("Hello world!");
    printf("\n%d\n",number);
    return 0;
}
*/



















