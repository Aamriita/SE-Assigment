/07 WAP to print Fibonacci series up to given numbers
#include<stdio.h>    
int main()    
{    
  int n,n1=0,n2=1,n3,i;
  printf("Enter Number of fibonacci elements: ");
  scanf("%d",&n);
  printf("%d %d",n1,n2);
  for(i=2;i<n;i++)
  {
  	n3=n1+n2;
  	n1=n2;
  	n2=n3;
  	printf(" %d",n3);
  }
  return 0;
 }
