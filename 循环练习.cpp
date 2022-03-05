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

//求0-100多少个9 
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


//分组求和
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

////求最大值
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max =arr[0];//假设第一个为最大！！防止负数的数组 
//	int i =0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//数组个数 
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i]>max)//下标为i的数 
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

////乘法口诀表 
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

//猜数字游戏
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
//	ret = rand()%100+1;//生成随机数  x%100为0-99 +1为0-100 
//	while(1){
//		printf("猜数字\n");
//		scanf("%d",&guess);
//		if(guess>ret){
//			printf("猜大了\n");
//		}	
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break; 
//		}
//	}
//	
//} 
//int main()
//{
//	int input =0;
//	srand((unsigned int)time(NULL));//拿时间戳设置随机数起点 
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		 } 
//	}while(input);
//	return 0;
// } 
//
//

//电脑关机
//#include<windows.h>
//#include<string.h> 
//int main(){
//	char input[20]={};
//	system("shutdown -s -t 60");
//again:	
//	printf("请注意 你的电脑将在1分钟内关机，如果输入我是猪就取消关机\n请输入>:"); 
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)
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
//		printf("请注意 你的电脑将在1分钟内关机，如果输入我是猪就取消关机\n请输入>:"); 
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//		break;
//	 } 
//	}
//	return 0;
//} 
//



































































