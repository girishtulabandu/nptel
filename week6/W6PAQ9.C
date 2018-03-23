#include<stdio.h>
#include<conio.h>
int main()
{
  int arr1[5];
  int arr2[5];
  int arr3[10];
  int i=0,j=0;
  clrscr();

  for(i=0;i<5;i++)
  {
    scanf("%d",&arr1[i]);
  }

  for(i=0;i<5;i++)
  {
    scanf("%d",&arr2[i]);
  }

  for(i=0;i<5;i++)
  {
    arr3[i]=arr1[i];
    j++;
  }

  for(i=0;i<5;i++)
  {
   arr3[j]=arr2[i];
   j++;
  }

  for(i=0;i<10;i++)
  {
    printf("%d\n",arr3[i]);
  }
  getch();
  return 0;

}