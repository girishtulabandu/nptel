#include<stdio.h>
#include<conio.h>
int main()
{
  int a[3][3],i,j,sum=0,m=3,n=3;
  clrscr();

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
     if(i==j)
     {
       sum=sum+a[i][j];
     }
   }
  }
  printf("sum=%d",sum);
  getch();
  return 0;
}