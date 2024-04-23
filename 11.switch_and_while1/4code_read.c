#include <stdio.h>
/*
int main()
{
    int ch=getchar();//从键盘获取字符，将获取到的字符的ASCII码的值存储入ch中
    //getchar的返回值是int类型;
    //printf("%c\n",ch);
    //putchar(ch);
    EOF;//
    while ((ch=getchar())!=EOF)
    {
        putchar(ch);
    }
    return 0;
}
*/

#include <stdio.h>
/*
int int main(int argc, char const *argv[])
{
	int i=1;
	while(i<=10)
	{	
		if(i==5)
		{
			continue
		}
		printf("%d\n",i);
		i++;
	}
	return 0;
}
*/


/*
int main(int argc, char const *argv[])
{
	int ch=0;
	while((ch=getchar())!=EOF)
	{
		putchar(ch);   //这段代码块是为了清空缓冲区的内存?
	}
	return 0;
}
*/


//下面演示该段代码的作用
int main(int argc, char const *argv[])
{
	char password[20]={0};
	printf("请输入密码\n");
	scanf("%s",password[]);
	printf("请确认密码(Y/N)\n");
	int ch=getchar();
	if((ch=getchar())!=EOF)
	{
		printf("Yes\n");

	}
	else
	{
		printf("No\n");

	}
	return 0;
}












