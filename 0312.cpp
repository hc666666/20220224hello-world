
//С�������ŵ�ǰ�˹���ʦ��Ϊ�˷�ֹϵͳ�����⹥����С������Ҫ���û������û���֮ǰ��һ���Ϸ��Լ�飬һ���Ϸ����û��������������¼���Ҫ��

//�û��������ַ������Ǵ�д����Сд��ĸ��
//�û���ֻ�ܰ�����Сд��ĸ�����֡�
//�û�����Ҫ��������һ����ĸ��һ�����֡�
//����û����Ϸ�������� "Accept"����֮��� "Wrong"��

 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    char name[20][100]={0};
    int countnumber=0;
    int countchar=0;
    int j=0;
    char c=' ';
    int tag=0;
   scanf("%d\n",&n);
    
   for(int i=0;i<n;i++)
   {
       for(int k=0;k<20;k++)
      {c=getchar();
      name[i][k]=c;
      if(c=='\n')
      break;
       }
    }
    
    for(int i=0;i<n;i++)
    
 {countchar=0;
   countnumber=0; 
   tag=0;
   j=0;
       if(!((name[i][0]<='Z'&&name[i][0]>='A')||(name[i][0]<='z'&&name[i][0]>='a')))
         {  printf("Wrong\n");
          }
        else{
        while(name[i][j]!='\n')
        {
         if(!((name[i][j]<='Z'&&name[i][j]>='A')||(name[i][j]<='z'&&name[i][j]>='a')||(name[i][j]<='9'&&name[i][j]>='0')))
         {printf("Wrong\n");tag=1;}
         else{

            if((name[i][j]<='Z'&&name[i][j]>='A')||(name[i][j]<='z'&&name[i][j]>='a'))
            countchar++;
            if(name[i][j]<='9'&&name[i][j]>='0')
            countnumber++;
         }
         j++;
        }
        if((countchar==0||countnumber==0)&&tag==0)
        printf("Wrong\n");
       if(!(countchar==0||countnumber==0)&&tag==0)
         printf("Accept\n");
        }
    }
return 0;


}

