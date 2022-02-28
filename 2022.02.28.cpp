#include<stdio.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	char* p1="abcdef";
	char* p2="abcdef"; //指针指向的地址一样 自身地址不一样 
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
int main()//指针数组 
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
int main()//数组指针 实际是个指针 
{//arr 首元素地址  arr[0]首元素地址  &arr数组地址 
	char*arr[5]={0};
	char* (*pa)[5]=&arr;//第二个*表示pa指针  指针里面有五个数组  第一个char* pa指向的数组的元素类型是char*的 
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
		printf("%d ",*(p+i));//不用太麻烦不用非得用数组指针 数组指针一般用于二维数组中 
	}
	return 0;
}

void print1(int arr[3][5],int x,int y)//参数是数组形式 

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
void print2(int(*p)[5],int x,int y)//参数是指针形式  下面也都是指针的形式- 
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j=0;
		for(j=0;j<y;j++)
		{                   //(*(p[i]+j)=p[i][j]=arr[i][j]
//			printf("%d ",*(*(p+i))+j);//先找到行地址一个* 然后加j找到单个的列地址所以第二个* 
			printf("%d ",(*(p+i))[j]);//找到行然后解引用真的找到行的值然后j      
			               
		}
		printf("\n");
	}
	
}
//int arr[5];                 是一个5个元素的整型数组
//int*parr[10]              是一个数组 数组里有10个元素 没个元素的类型是int*p
//int （*parr{2]（10））     parr2是一个指针 该指针指向了一个数组 数组里有10个元素 每个元素都是int  parr2是数组指针
//int(*(parr3[10]))[5]      parr3是一个数组 该数组有10个元素，每个元素是一个数组指针 该数组指针（里面存的是指针）指向的数组有5个元素 每个元素都是int 
int main()                               	 
 
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	print2(arr,3,5);
	return 0;
}






















