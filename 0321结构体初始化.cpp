#include<stdio.h>
int count=0;
int fibo[7]={0,1,2,3,4,5,8};
//初始化
struct book library={
	"the pirate and the devious damsel",
	"rense vivotte",
	1.95
};
//访问结构成员
gets(library.title);
scanf("%f",&library.value);
//结构体指定初始化项目
struct book surprise={.value=25.99,.author="James",.title="rue for road"
}; 
