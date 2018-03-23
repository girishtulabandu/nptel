#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,j;
  int a[10][10];
  clrscr();
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }


  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
      {
	a[i][j]=a[i][j];
      }
      else
      {
	a[i][j]=0;
      }
    }
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  getch();
  return 0;

}
