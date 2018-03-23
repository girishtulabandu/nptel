#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[5];
   int i=0,j=0,temp,size=5;
   clrscr();


   for(i=0;i<5;i++)
   {
      scanf("%d",&arr[5]);
   }

   j=size-1;
   i=0;
   while(i<j)
   {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     i++;
     j--;
   }
   for(i=0;i<5;i++)
   {
     printf("\n%d",arr[i]);
   }

   getch();
   return 0;



}