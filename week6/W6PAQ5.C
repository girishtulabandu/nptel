
#include<stdio.h>
#include<conio.h>
int main()
{
  int num1,num2;
  int result=0;
  char ch;
  clrscr();

  scanf("%c",&ch);
  scanf("%d",&num1);
  scanf("%d",&num2);

  switch(ch)
  {
    case '+':
    result=num1+num2;
    break;

    case '-':
    result=num1-num2;
    break;

    case '*':
    result=num1*num2;
    break;

    case '/':
    result=num1/num2;
    break;

    default:
    result=0;
    break;

  }
  printf("%d",result);
  getch();
  return 0;
}