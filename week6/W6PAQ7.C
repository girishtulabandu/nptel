#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[10];
   int i=0;
   clrscr();

   for(i=0;i<10;i++)
   {
     scanf("%d",&arr[i]);
   }

   for(i=0;i<10;i++)
   {
     if(arr[i]%2==0)
     {
	arr[i]=0;
     }
     else
     {
      arr[i]=1;
     }
   }


   for(i=0;i<10;i++)
   {
      printf("%d",arr[i]);
   }
   getch();
   return 0;
}