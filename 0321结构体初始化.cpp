#include<stdio.h>
int count=0;
int fibo[7]={0,1,2,3,4,5,8};
//��ʼ��
struct book library={
	"the pirate and the devious damsel",
	"rense vivotte",
	1.95
};
//���ʽṹ��Ա
gets(library.title);
scanf("%f",&library.value);
//�ṹ��ָ����ʼ����Ŀ
struct book surprise={.value=25.99,.author="James",.title="rue for road"
}; 
