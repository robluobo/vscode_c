#include <stdio.h>
/*
int main()
{
    int int1=0,i=0;;
    while (i<12)
    {
        scanf("%d",&int1);
        char char1;
        char1=int1;
        printf("%c\n",char1);
        i++;
    }
    return 0;
}
*/


//遍历循环数组中的数值，并把数值与ASCII码中的字符一一对应输出
int main()
{
    char ascii[]={73,32,99,97,110,32,100,111,32,105,116,33};
    int i=0;
    int size=sizeof(ascii)/sizeof(ascii[0]);
    while (ascii[i],i<size)
    {
        printf("%c",ascii[i]);
        i++;
    }
    

    return 0;
}























