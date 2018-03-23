#include<stdio.h>
#include<conio.h>
int main()
{
  int arr[5];
  int i,j,n=5;
  int ind=-1,ele;
  clrscr();

  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
     if(arr[i]==arr[j])
     {
       ele=arr[j];
       ind=j;
       break;
     }
   }
  }
    if(ind!=-1)
    {
    printf("%d repeated at index %d\n",ele,ind);
    }
  getch();
  return 0;
}