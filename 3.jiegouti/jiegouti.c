#include <stdio.h>
struct stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};
void print(struct stu* x)
{
	printf("%s %d %s %s \n",(*x).name,(*x).age,(*x).sex,(*x).tele );
	printf("%s %d %s %s \n",x->name,x->age,x->sex,x->tele);
}
int main(int argc, char const *argv[])
{
	struct stu s ={"zhn",20,"nan","3212"};

	printf("%s %d %s %s \n",s.name,s.age,s.sex,s.tele);
	print(&s);
	return 0;
}