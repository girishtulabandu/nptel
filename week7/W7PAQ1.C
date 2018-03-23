#include<stdio.h>
#include<conio.h>
void main()
{
  int num[10];
  int i,number=10;
  int mean,sum=0;
  clrscr();

  for(i=0;i<number;i++)
  {
    scanf("%d",&num[i]);
  }

  for(i=0;i<number;i++)
  {
    sum=sum+num[i];
  }
  mean=sum/number;

  printf("%d",mean);
  getch();
}