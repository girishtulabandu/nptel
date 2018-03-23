#include<stdio.h>
#include<conio.h>
int main()
{
  int j,array[5],largest=-1,second=-1;
  clrscr();
  for(j=0;j<5;j++)
  scanf("%d",&array[j]);

  for(j=0;j<5;j++)
  {
    if(array[j]>largest)
    {
       largest=array[j];
    }
  }
  for(j=0;j<5;j++)
  {
    if(array[j]!=largest)
    {
      if(array[j]>second)
      second=array[j];
    }
  }

  printf("%d %d",largest,second);
  getch();
  return 0;

}