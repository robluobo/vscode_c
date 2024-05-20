#include <stdio.h>

//指针加减整数的一些情况
#define N_VALUES 5
float values[N_VALUES];
float *vp;
int main()
{

    for ( vp = &values[0]; vp < &values[N_VALUES];)
    {
        *vp++=0;//意思是0赋值给每次的*vp++
    }
    

    return 0;
}