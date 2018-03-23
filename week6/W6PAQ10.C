#include<stdio.h>
#include<conio.h>
int main()
{
  int arr1[5];
  int arr2[5];
  int arr3[5];
  int arr4[5];
  int i=0;
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
   arr3[i]=arr1[i]+arr2[i];
   arr4[i]=arr1[i]-arr2[i];
  }

  for(i=0;i<5;i++)
  {
    printf("\n%d",arr3[i]);
  }
  for(i=0;i<5;i++)
  {
    printf("\n%d",arr4[i]);
  }
  getch();
  return 0;


}