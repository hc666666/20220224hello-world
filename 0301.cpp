#include<stdio.h>//����ָ��  ��һ��ָ�� ��ź��� 
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
	void (*p)(char*)=Print;//char* �������� 
	(*p)("hello bit");//�������� pΪ��ַ*p�ҵ����� ���δ��ַ��� 
	return 0;
 } 
