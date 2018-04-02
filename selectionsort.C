#include<stdio.h>
#include<conio.h>
int main()
{
  int array[10],n=10,i,j,index,swap;
  clrscr();

  for(i=0;i<n;i++)
  {
   scanf("%d",&array[i]);
  }

  for(i=0;i<n;i++)
  {
    index=i;
    for(j=0;j<n;j++)
    {
      if(array[j]>array[index])
      {
	swap=array[index];
	array[index]=array[j];
	array[j]=swap;

      }
    }
  }
  printf("the sorted output in ascending order.\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",array[i]);
  }
  getch();
  return 0;


}