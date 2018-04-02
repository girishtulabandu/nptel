#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n=10,first,last,middle,search,arr[10],pos=-1;
  clrscr();

  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("%d",&search);
  first=0;
  last=n-1;
  while(first<last)
  {
    middle=(first+last)/2;
    if(arr[middle]==search)
    {
      pos=middle+1;
      printf("%d found at position %d",search,pos);
      break;
    }
    else if(arr[middle]>search)
    {
      last=middle;
    }
    else if(arr[middle]<search)
    {
      first=middle;
    }
  }

  if(pos==-1)
  {
    printf("%d is not there in the list",search);
  }
  else
  {
   printf("hehe");
  }
  getch();
  return 0;
}