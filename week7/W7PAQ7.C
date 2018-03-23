#include<stdio.h>
#include<conio.h>
int main()
{
  int arr[50],freq[50];
  int size,i,j,count;
  clrscr();

  scanf("%d",&size);

  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
    freq[i]=-1;
  }

  for(i=0;i<size;i++)
  {
    count=1;
    for(j=i+1;j<size;j++)
    {
       if(arr[i]==arr[j])
       {
	 count++;
	 freq[j]=0;
       }
       }
       if(freq[i]!=0)
       {
       freq[i]=count;
       }
  }

  for(i=0;i<size;i++)
  {
    if(freq[i]!=0)
    {
     printf("\n %d occurs  %d times",arr[i],freq[i]);
    }
  }
  getch();
  return 0;
}