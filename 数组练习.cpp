#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,3};
//	//sizeof����������ռ�ռ��С ��\0
//	//strlen��\0ֹͣ ����\0  ��Ҫ<string.h>ͷ�ļ� 
//	return 0;
//}
//ð������ 
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
//	bubble_sort(arr, sz);//������Ԫ�ص�ַ 
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
// } 
//
//�Ż�ð������ 
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=1;//������������ 
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag=0;//��������ȫ���� 
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
//	bubble_sort(arr, sz);//������Ԫ�ص�ַ arr������*arr ������ �⿪��ַչ��ֵ 
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
// } 
//
//
//������ ɨ�� 
#include"game.h"
void menu()
{
	printf("*****************\n");
	printf("**1 ������ 2 �˳�**\n");
	printf("******************\n"); 
}
void game()
{
	char board[ROW][COL]={0};//ȫ���ո�
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ���� 
	
 } 
void test()
{
	int input=0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ����� ����ѡ��\n");
			break;
		}
	}while(input);
}
int main(){
	
	test();
	return 0;
} 




















 
