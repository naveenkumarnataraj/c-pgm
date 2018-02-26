#include<stdio.h>
int main() 
{
           int a,b;
           printf("enter the value:");
           scanf("%d",&a);
           printf("enter the value:");
           scanf("%d",&b);
           a=a+b;
          b=a-b;
          a=a-b;
           printf("after swapping the values are:\n%d:\n%d",a,b);
           
	return 0;
}
