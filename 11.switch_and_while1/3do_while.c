//dowhile循环
#include <stdio.h>
int main()
{
    int i=0;
    do
    {
        if(i==5)
        {
            continue;
            //break;//两个对比进行查看
        }
        printf("%d ",i);
        i++;
    } 
    while (i<=10);
    return 0;
}



















