#include<stdio.h>//函数指针  是一个指针 存放函数 
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20;
	int arr[10]={0};
	int(*pa)(int,int)=Add;
	printf("%d",(*pa)(2,3));
	return 0;
 }
void Print(char*str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*)=Print;//char* 参数类型 
	(*p)("hello bit");//函数调用 p为地址*p找到函数 传参传字符串 
	return 0;
 } 
