#include<stdio.h>
typedef struct Stu
{
	char name=[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)
{
	printf("name: %s\n",tmp.name);
	printf("age : %d\n",tmp.age);
	printf("tele: %s\n",tmp.tele);
	printf("sex : %s\n",tmp.sex);

}
void Print2(Stu* ps)
{
	printf("name: %s\n",ps->name);
	printf("age : %d\n",ps->age);
	printf("tele: %s\n",ps->tele);
	printf("sex : %s\n",ps->sex);

}//方法二更好 空间需要的小 传结构体要是按照1来会很大 2只用传地址  

int main()
{
	Stu s = {"张三"，20，"123","男"};
	Print1(s);
	Print2(&s);
	
	return 0;
	
 } 
