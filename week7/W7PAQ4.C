#include<stdio.h>
#include<conio.h>
int main()
{
  int row,col,i,j,count=0;
  int a[10][10];
  clrscr();
  scanf("%d %d", &row,&col);

  for(i=0;i<row;i++)
  {
    for(j=0;j<col;++j)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;++j)
    {
      if(a[i][j]<0)
      {
      count++;
      }
    }
  }
  printf("No of elements =%d",count);
  getch();
  return 0;
}