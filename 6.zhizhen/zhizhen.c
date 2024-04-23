#include <stdio.h>
int main()
{
	int a=10;
	int* p=&a;   //P指向对象是int类型 
	printf("%d\n",*p);
	//*p=a，通过p中存放的地址，找到p所指向的对象 
	//p存放地址 
	*p=34;
	printf("%d\n",*p);  //可以通过地址找到对象并且进行更改 
	
	char w= 'e';  //不同类型的指针 
	char* mm=&w; 
	
	printf("%d\n",sizeof(char*)); 
	printf("%d\n",sizeof(int*)); 
	printf("%d\n",sizeof(float*)); //取决于一个地址存放的时候需要多大空间，看32或者是64位的电脑 
	return 0;
 } 
 
 