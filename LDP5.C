#include<stdio.h>
#include<conio.h>
main()
{
  int n,rsum=0,temp;
  printf("enter number=");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
   r=n%10;
   sum=(sum*10)+r;
   n/=10
  }
  if(temp==sum)
  {
    printf("this is palindrome number");
  }
  else
  {
    printf("thid id not palindrome number");
  }
}