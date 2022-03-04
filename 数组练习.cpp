#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,3};
//	//sizeof计算数组所占空间大小 算\0
//	//strlen到\0停止 不算\0  需要<string.h>头文件 
//	return 0;
//}
//冒泡排序 
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[]={3,4,8,4,2,5,8,7,6};
//	int i=0; 
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	
//	bubble_sort(arr, sz);//传的首元素地址 
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
// } 
//
//优化冒泡排序 
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=1;//假设排序有序 
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag=0;//本汤不完全有序 
//			}
//		}
//		if(flag==1)
//		{
//			break;
//		 } 
//	}
//}
//int main()
//{
//	int arr[]={3,4,8,4,2,5,8,7,6};
//	int i=0; 
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	
//	bubble_sort(arr, sz);//传的首元素地址 arr数组名*arr 解引用 解开地址展出值 
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
// } 
//
//
//三子棋 扫雷 
#include"game.h"
void menu()
{
	printf("*****************\n");
	printf("**1 三子棋 2 退出**\n");
	printf("******************\n"); 
}
void game()
{
	char board[ROW][COL]={0};//全部空格
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘 
	
 } 
void test()
{
	int input=0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("三子旗\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误 重新选择\n");
			break;
		}
	}while(input);
}
int main(){
	
	test();
	return 0;
} 




















 
