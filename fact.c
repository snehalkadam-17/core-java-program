#include<stdio.h>
void add();
main()
{
int i,fact=1,n;
  printf("\n enter n");
  scanf("%d",&n);
  
  
  for(i=0;i<=n;i++)
  {
    fact=fact*1;
  }
  println("\n fact=%d",fact);
  addD();
  printf("demo");
  
}
void add()
{
  int a,b,c;
  printf("\n enter a,b:");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("addition of two numbers:%d",c);
}
    void sub()
{
  int a,b,c;
  printf("\n enter a,b:");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("subtraction of two numbers:%d",c);
}

