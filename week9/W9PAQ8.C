#include<stdio.h>
#include<conio.h>
int main()
{
  int a[3][3],b[3][3],i,j,m=3,n=3;
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
    for(j=0;j<m;j++)
    {
      b[i][j]=a[j][i];
    }
  }
   for(i=0;i<m;i++)
  {
    for(j=0;j<m;j++)
    {
     printf("%d\n",b[i][j]);
    }
  }
  getch();
  return 0;


}