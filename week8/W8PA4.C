#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str1[20],str2[20],str[20];
  int i=0,j=0;
  clrscr();
  scanf("%s" "%s",str1,str2);

  while(str1[i]!='\0')
  {
    str[j]=str1[i];
    i++;
    j++;
  }
  i=0;
  while(str2[i]!='\0')
  {
    str[j]=str2[i];
    i++;
    j++;
  }
  i=0;
  j=0;
  while(str[i]!='\0')
  {
    str1[j]=str[i];
    i++;
    j++;
  }
  str1[j]='\0';
  printf("concated string is: %s",str1);
  getch();
  return 0;
}