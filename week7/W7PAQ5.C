#include<stdio.h>
#include<conio.h>
int main()
{
  int matrix[10][10];
  int i,j,r,c,k;
  int sum[10];
  clrscr();

  scanf("%d %d",&r,&c);

  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&matrix[i][j]);
    }
  }

  for(j=0;j<c;j++)
  {
    k=0;
    for(i=0;i<r;i++)
    {
     k=k+matrix[i][j];
    }
    sum[j]=k;
  }

  for(j=0;j<c;j++)
  {
   printf("%d",sum[j]);
  }
  getch();
  return 0;
}