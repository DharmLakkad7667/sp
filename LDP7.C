#include<stdio.h>
#include<conio.h>
main()
{
  int n,a=0,b=1,c;
  printf("enter number=");
  scanf("%d",&n);
  while(n>a)
  {
    printf("%d,",a);
    c=a+b;
    a=b;
    b=c;
  }

}