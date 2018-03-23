#include<stdio.h>
#include<conio.h>
int main()
{
  int j,array[5],num,count=0;
  clrscr();
  scanf("%d",&num);
  for(j=0;j<5;++j)
  {
    scanf("%d",&array[j]);
  }

  for(j=0;j<5;++j)
  {
     if(array[j]==num)
     {
	count=count+1;
     }
  }
  printf("%d",count);
  getch();
  return 0;

}