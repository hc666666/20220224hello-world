#include<stdio.h>//º¯ÊýÖ¸Õë 
void Print(char*str)
{
	printf("%s",str);
}
int main()
{
	void (*p)(char *)=Print;
	(*p)("hello world");
	return 0;
 } 
// void(*signal(int,void(*)(int)))(int)
// 
// //=
// typedef void(*pfun_t)(int);
// pfun_t signal(int,pfun_t);
// typedef unsigned int unit;
