#include<stdio.h>
#include<math.h>
//int main()
//{
//	int count =0;
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//	
//		int j=0;
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//
//	if(j>sqrt(i))
//	{
//		count++;
//		printf("%d\n",i);
//		
//	}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
// } 

//��0-100���ٸ�9 
//int main(){
//	
//	int i=0;
//	int count =0;
//	for(i=0;i<=100;i++)
//	{
//		if(i/10==9)
//			count++;
//		if(i%10==9)
//			count++; 
//	 } 
//	printf("%d\n",count);
//	return 0;
//} 


//�������
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum +=flag* 1.0/i;
//		flag=-flag;
//		
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
// 

////�����ֵ
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max =arr[0];//�����һ��Ϊ��󣡣���ֹ���������� 
//	int i =0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//������� 
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i]>max)//�±�Ϊi���� 
//		{
//			max=arr[i];
//		}
//	}
//	printf("%d\n",max);
//	return 0;
// } 
//
//
//
//

////�˷��ھ��� 
//int main()
//{
//	
//	int i=0;
//	
//	for(i=1;i<=9;i++)
//	{
//		int j=1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
// } 
//
//
//

//��������Ϸ
//#include<stdlib.h> 
//#include<time.h> 
//void menu()
//{
//	printf("*****************\n");
//	printf("***  1.play   0.exit ***\n");
//	printf("*****************\n");
//	
//}
//void game()
//{
//	int ret=0;
//	int guess=0;
//	ret = rand()%100+1;//���������  x%100Ϊ0-99 +1Ϊ0-100 
//	while(1){
//		printf("������\n");
//		scanf("%d",&guess);
//		if(guess>ret){
//			printf("�´���\n");
//		}	
//		else if(guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break; 
//		}
//	}
//	
//} 
//int main()
//{
//	int input =0;
//	srand((unsigned int)time(NULL));//��ʱ��������������� 
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		 } 
//	}while(input);
//	return 0;
// } 
//
//

//���Թػ�
//#include<windows.h>
//#include<string.h> 
//int main(){
//	char input[20]={};
//	system("shutdown -s -t 60");
//again:	
//	printf("��ע�� ��ĵ��Խ���1�����ڹػ�����������������ȡ���ػ�\n������>:"); 
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	 } 
//	else
//	{
//		goto again;
//	}
//	return 0;
//} 
//
//
//#include<windows.h>
//#include<string.h> 
//int main(){
//	char input[20]={};
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("��ע�� ��ĵ��Խ���1�����ڹػ�����������������ȡ���ػ�\n������>:"); 
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//		break;
//	 } 
//	}
//	return 0;
//} 
//



































































