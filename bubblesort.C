#include<stdio.h>
#include<conio.h>
int main()
{
  int array[10],n=10,i,j,swap;
  clrscr();

  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  for(j=0;j<n-1;j++)
  {
  for(i=0;i<n-1;i++)
  {
    if(array[i]>array[i+1])
    {
    swap=array[i+1];
    array[i+1]=array[i];
    array[i]=swap;
    }

    }
  }

  printf("sorted array");
  for(i=0;i<n;i++)
  {
    printf("%d\n",array[i]);
  }
  getch();
  return 0;
}