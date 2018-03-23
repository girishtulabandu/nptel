#include<stdio.h>
#include<conio.h>
#define size 5
void readarraya(int a[],int );
void readarrayb(int b[],int );
void addarray(int a[],int b[],int add[], int );
void subarray(int a[], int b[], int sub[], int );
void printarrayadd(int add[], int );
void printarraysub(int sub[], int );
int main()
{
       int i,n;
       int a[size],b[size],add[size],sub[size];
	clrscr();
    /* Read Array a */
    readarraya(a,size);

    /* Read Array b */
    readarrayb(b,size);

    /* add two arrays*/
    addarray(a,b,add,size);

    /* subtract two arrays*/
    subarray(a,b,sub,size);

    printf("After adding\n");
    printarrayadd(add,size);

    printf("After subtracting\n");
    printarraysub(sub,size);
    getch();
    return 0;
}

void readarraya(int a[], int j)
{
  int i,size=j;
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
}
void readarrayb(int b[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
   scanf("%d",&b[i]);
  }
}
void addarray(int a[],int b[],int add[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    add[i]=a[i]+b[i];
  }

}
void subarray(int a[],int b[],int sub[],int size)
{
  inti;
  for(i=0;i<size;i++)
  {
    sub[i]=a[i]-b[i];
  }
}
void printarrayadd(int add[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    printf("%d",add[i]);
  }
}
void printarraysub(int sub[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    printf("%d",sub[i]);
  }
}



/*int main()
{
       int i,n;
       int a[size],b[size],add[size],sub[size];
	clrscr();
    /* Read Array a */
    readarraya(a,size);

    /* Read Array b */
   // readarrayb(b,size);

    /* add two arrays*/
    //addarray(a,b,add,size);

    /* subtract two arrays*/
//    subarray(a,b,sub,size);

  //  printf("After adding\n");
    //printarrayadd(add,size);

    //printf("After subtracting\n");
    //printarraysub(sub,size);
    //getch();
    //return 0;
//}