#include<stdio.h>
#include<conio.h>
int main()
{
  int un;
  float net;
  clrscr();
  scanf("%d",&un);

  if(un<200)
  {
     net=un*1.20;
  }
  else if(un>200 && un<400)
  {
     net=un*1.50;
  }
  else if(un>400 && un<600)
  {
     net=un*1.80;
  }
  else
  {
   net=un*2;
  }


  if (net<100)
  {
    net=100;
    printf("%.2f",net);
  }
  else if(net>400)
  {
     net=net*115/100;
     printf("%.2f",net);
  }
  else
  {
   printf("%.2f",net);
  }

  getch();
  return 0;





}