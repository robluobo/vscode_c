#include <stdio.h>
/*
#define N 4
#define M 3
int main()
{
	int a[M][N];
	int *p1[M];
	int **p2,i,j;
	for(i=0;i<M;i++)
	{
		p1[i]=a[i];
	}
	p2=p1;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",p2[i]+j);
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=N-1;j<=0;j--)
		{
			printf("%4d",*((*p2+i)+j));
		}
		printf("\n");
	}
	return 0;
} 
*/



/*
int main()
{
	int i=0;
	char a[][6]={"one","two","three","four"};
	char *p[4],**s=p;
	for ( i = 0; i < 4; i++)
	{
		p[i]=a[i];
	}
	printf("%c",*(*a+1));//*a是a[0],指向字符串one，*a+1是a[0][1],是n
	printf("%c",**++s+2);//++s指向p[1],"two",**s是p[1][0]是t
	//ascii码值加2，得到v
	printf("%c\n",(*(p+2))[3]);//p[2][3]字符串第四个
	//所以最后结果是nve
	return 0;
}
*/







/*
void swap(int *p1,int *p2)
{
	int m=0;
	m=*p1;
	*p1=*p2;
	*p2=m;
}
int main()
{
	
	int n1=0,n2=0,n3=0;
	int *p1,*p2,*p3;
	printf("three number\n");
	scanf("%d,%d,%d",&n1,&n2,&n3);
	p1=&n1;
	p2=&n2;
	p3=&n3;
	if (n1>n2)
	{
		swap(p1,p2);
	}
	if (n1>n3)
	{
		swap(p1,p3);
	}
	if (n2>n3)
	{
		swap(n2,n3);
	}
	printf("%d,%d,%d\n",n1,n2,n3);
	

	return 0;
}
*/


/*
void swap(char *p1,char *p2)
{
	char p[20];
	strcpy(p,p1);
	strcpy(p1,p2);
	strcpy(p2,p);
}
int main()
{
	char arr1[20],arr2[31],arr3[20];
	printf("three string\n");
	gets(arr1);
	gets(arr2);
	gets(arr3);
	if (strcmp(arr1,arr2)>0)
	{
		swap(arr1,arr2);
	}
	if (strcmp(arr1,arr3)>0)
	{
		swap(arr1,arr3);
	}
	if (strcmp(arr2,arr3)>0)
	{
		swap(arr2,arr3);
	}
	printf("%s\n%s\n%s\n",arr1,arr2,arr3);
	return 0;
}
*/


void input(int *n)
{
	int i=0;
	printf("10numbers");
	for ( i = 0; i < 10; i++)
	{
		scanf("%d",&n[i]);
	}
	
}
void rather(int *n)
{
	int *big,*small,*p,mid;
	big=small=n;
	for ( p = n+1; p < n+10; p++)
	{
		if (*p>*big)
		{
			big=p;
		}
		else if (*p<*small)
		{
			small=p;
		}
	}
	mid=n[0];
	n[0]=*small;
	*small=mid;
	if (big==n)
	{
		big=small;
	}
	mid=n[9];
	n[9]=*big;
	*big=mid;
}

void output(int *n)
{
	int *p;
	for ( p = n; p < n+10; p++)
	{
		printf("%d",*p);
	}
	printf("\n");
}

int main()
{
	int n[10];
	input(n);
	rather(n);
	output(n);
	return 0;
}

















