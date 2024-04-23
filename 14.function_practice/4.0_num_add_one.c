//写一个函数，每次调用函数，就会将num的值增加1


#include <stdio.h>

void add(int *num2)
{
    *num2+=1;
}



int main()
{
    int num=0;
    add(&num);
    add(&num);
    printf("%d\n",num);

    return 0;
}