#include <stdio.h>
/*
int int main(int argc, char const *argv[])
{
	int age;
	scanf("%d",&age);
	if (age<18)
	{
		printf("未成年\n");
	}
	else if (age>18&&age<78)
	{
		printf("青年\n");
	}
	else if (age>78&&age<99)
	{
		printf("中年\n");
	}
	//只执行一个语句
	return 0;
}
*/

/*
int test()
{
	int a=90;
	if (a==90)
	{
		return 9; 
	}

	return 0;
}


int main(int argc, char const *argv[])
{
	int m=test();
	printf("%d\n",m);
	
	return 0;
}
*/


/*
int main(int argc, char const *argv[])
{
	int i=0;
	while(i < 101)
	{
		if(i%2==0)
		{
			printf("%d不是奇数\n",i);
		}
		else
		{
			printf("%d是奇数\n",i);
		}
		i++;
	}
	return 0;
}
*/

//switch语句:1
/*
int main(int argc, char const *argv[])
{
	int day=1;

	switch(day)//括号里必须是整型常量表达式
	{
		//case 整型常量表达式:语句;//必须为整型常量表达式!
		case 1:
			printf("ss");
			break;
		case 2:
			printf("sd");
			break;

	}

	return 0;
}
*/

//switch语句:2
/*
int main(int argc, char const *argv[])
{
	int day=1;

	switch(day)
	{
	
		case 1:		//直接往下 
		case 2:
		case 3:
		case 4:
			printf("ss");
			break;
		case 5:
		case 6:
			printf("sd");
			break;

	}

	return 0;
}
*/


int main(int argc, char const *argv[])
{
	int i=1;
	while(i<=10)
	{	
		if(i==5)
		{
			continue;//遇到continue，跳过下面的部分,进行下一次循环的判断 
		}
		printf("%d\n",i);//只输出1-4，i=5的时候下面的语句永远也没有机会执行 
		i++;
		//break是永久停止循环 
	}
	return 0;
}

