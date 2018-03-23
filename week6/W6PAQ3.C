#include<stdio.h>
#include<conio.h>
int main()
{
   int a[20],even[20],odd[20],i,n,e=0,o=0;
   clrscr();
   printf("enter the number of elements into array\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     printf("\na[%d]=%d",i,a[i]);
   }
   for(i=0;i<n;i++)
   {
     if(a[i]%2==0)
     {
       even[e]=a[i];
       e++;
     }
     else
     {
       odd[o]=a[i];
       o++;
     }
     }
     printf("\neven array");
     for(i=0;i<e;i++)
     {
       printf("%d",even[i]);
     }
     printf("odd array\n");
     for(i=0;i<o;i++)
     {
     printf("%d",odd[i]);
     }
     getch();
     return 0;



}