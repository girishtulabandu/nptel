#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char string[20];
  int flag=0;
  int begin,end,middle,length=0;
  clrscr();
  scanf("%s",string);

  while(string[length]!='\0')
  {
    length++;
  }

  middle=length/2;
  end=length-1;

  for(begin=0;begin<middle;begin++)
  {
    if(string[begin]!=string[end])
    {
      flag=1;
    }
    end--;

  }
  if(flag)
  {
    printf("Not a palindrome");
  }
  else
  {
    printf("palindrome");

  }
  getch();
  return 0;
}