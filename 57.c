#include<stdio.h>
int main() 
{
           int a,b,c=0;
           printf("enter the value:");
           scanf("%d",&a);
           printf("enter the value:");
           scanf("%d",&b);
         c=a;
           a=b;
           b=c;
          
           printf("after swapping the values are:\n%d:\n%d",a,b);
           
	return 0;
}
