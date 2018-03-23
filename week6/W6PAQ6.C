#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[10];
   long int sum=0,product=1,i;
   clrscr();

   for(i=0;i<10;i++)
   {
     scanf("%d",&arr[i]);
   }

   for(i=0;i<10;i++)
   {
      sum=sum+arr[i];
      product=product*arr[i];
   }

   printf("%d",sum);
   printf("\n%d",product);
   getch();
   return 0;
}