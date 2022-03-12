
//小美是美团的前端工程师，为了防止系统被恶意攻击，小美必须要在用户输入用户名之前做一个合法性检查，一个合法的用户名必须满足以下几个要求：

//用户名的首字符必须是大写或者小写字母。
//用户名只能包含大小写字母，数字。
//用户名需要包含至少一个字母和一个数字。
//如果用户名合法，请输出 "Accept"，反之输出 "Wrong"。

 
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

