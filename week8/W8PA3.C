wrong
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str1[20],str2[20];
  int i,result=0,len1=0,len2=0;
  clrscr();

  scanf("%s" "%s",str1,str2);

  while(str1[len1]!=0)
  {
    len1++;
  }
  while(str2[len2]!=0)
  {
    len2++;
  }

  if(len1==len2)
  {
    for(i=0;i<len1;i++)
    {
      if(str1[i]==str2[i])
      {
	result=0;
      }
    }
  }
  else if(len1>len2)
  {
    result=1;
  }
  else
  {
    result=-1;
  }
  if (result==0)
  {
   printf("Equal");
  }
  else if(result>0)
  {
   printf("greater");
  }
  else
  {
    printf("less");
  }
  getch();
  return 0;
}