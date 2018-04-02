#include<stdio.h>
#include<conio.h>
int main()
{
  int a[3][3],b[3][3],c[3][3],i,j,k,m=3,n=3,o=3,p=3;
  clrscr();

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<o;i++)
  {
    for(j=0;j<p;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      c[i][j]=(a[i][j])*(b[i][j]);
    }
  }

  for(i=0;i<m;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
    {
      printf("%d\n",c[i][j]);
    }
  }
  getch();
  return 0;
}