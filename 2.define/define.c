//define定义标识符常量
//define定义宏 ，宏有参数 
#include <stdio.h>
#define WANG 100 
#define ADD(x,y) ((x)+(y))//参数无类型，宏名，宏参数，宏体 
int main()
{
	printf("%d\n",WANG);
	int a=10;
	int b=34;
	int c=ADD(a,b);
	printf("%d\n",c); 
	
	return 0;
 } 