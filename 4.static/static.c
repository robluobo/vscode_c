//关键字static ：修饰变量与函数 
//1.修饰局部变量:本质是改变了变量的存储位置，影响生命周期，与程序的生命周期一样，不销毁
//2.修饰全局变量:改变其链接属性 
//3.修饰函数 ：本该具有外部链接属性，被static修饰其属性变成内部链接属性 
#include <stdio.h>
void test()
{
	static int num3=1;//num3的值继续运行，出void之后不销毁 
	num3++;
	printf("%d ",num3);
}
int main()
{
	int num2=0;
	while (num2<10)
	{
		test();
		num2++;
	}
	return 0;
}
