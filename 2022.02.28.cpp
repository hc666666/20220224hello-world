#include<stdio.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	char* p1="abcdef";
	char* p2="abcdef"; //ָ��ָ��ĵ�ַһ�� �����ַ��һ�� 
	if(p1==p2)
	{
		printf("hehe");
		
	}
	else
	{
		printf("haha");
	}
	return 0;
 } 
int main()
{
	int a=30;
	int b=40;
	int c=50;
	int d=60;
	int* arr[]={&a,&b,&c,&d};
	int i=0;
	for(i=0;i<=4;i++)
	{
		printf("%d\n",*(arr[i]));
	}
	return 0;
}
int main()//ָ������ 
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,2,3,4,5};
	int arr3[]={3,4,5,6,7};
	int* p[]={arr1,arr2,arr3};
	int i=0;
	for(i=0;i<=3;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
		{
			printf("%d ",*(p[i]+j));
		}
		printf("\n");
	}
	return 0;
}
int main()//����ָ�� ʵ���Ǹ�ָ�� 
{//arr ��Ԫ�ص�ַ  arr[0]��Ԫ�ص�ַ  &arr�����ַ 
	char*arr[5]={0};
	char* (*pa)[5]=&arr;//�ڶ���*��ʾpaָ��  ָ���������������  ��һ��char* paָ��������Ԫ��������char*�� 
	return 0;
 } 

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int (*pa)[10]=&arr;
	int i=0;
	for(i=0;i<10;i++);
	{
		printf("%d ",(*pa)[i]);
	} 
	for(i=0;i<10;i++)
	{
		printf("%d ",*(*pa+i));
	}
	int *p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));//����̫�鷳���÷ǵ�������ָ�� ����ָ��һ�����ڶ�ά������ 
	}
	return 0;
}

void print1(int arr[3][5],int x,int y)//������������ʽ 

{

	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5],int x,int y)//������ָ����ʽ  ����Ҳ����ָ�����ʽ- 
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j=0;
		for(j=0;j<y;j++)
		{                   //(*(p[i]+j)=p[i][j]=arr[i][j]
//			printf("%d ",*(*(p+i))+j);//���ҵ��е�ַһ��* Ȼ���j�ҵ��������е�ַ���Եڶ���* 
			printf("%d ",(*(p+i))[j]);//�ҵ���Ȼ�����������ҵ��е�ֵȻ��j      
			               
		}
		printf("\n");
	}
	
}
//int arr[5];                 ��һ��5��Ԫ�ص���������
//int*parr[10]              ��һ������ ��������10��Ԫ�� û��Ԫ�ص�������int*p
//int ��*parr{2]��10����     parr2��һ��ָ�� ��ָ��ָ����һ������ ��������10��Ԫ�� ÿ��Ԫ�ض���int  parr2������ָ��
//int(*(parr3[10]))[5]      parr3��һ������ ��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�� ������ָ�루��������ָ�룩ָ���������5��Ԫ�� ÿ��Ԫ�ض���int 
int main()                               	 
 
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	print2(arr,3,5);
	return 0;
}






















