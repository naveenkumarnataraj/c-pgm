#include<stdio.h>
int main() 
{
           int a,sum=0,b;
           printf("enter the value:");
           scanf("%d",&a);
      while(a>0)
      {
              b=a%10;
             a=a/10;
              sum=sum+b;
      }
           printf("the sum of the digit is:\n%d",sum);
           
	return 0;
}
