#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char string[20];
  int begin,end,middle,length=0,temp=0;
  clrscr();
  gets(string);

  while(string[length]!=0)
  {
    length++;
  }

  end=length-1;
  middle=length/2;

  for(begin=0;begin<middle;begin++)
  {
    temp=string[begin];
    string[begin]=string[end];
    string[end]=temp;
    end--;
  }
  printf("%s",string);
  getch();
  return 0;

}