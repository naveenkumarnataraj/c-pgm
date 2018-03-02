#include <stdio.h>
int main()
{
    int i,n,max;
    printf("enter the value");
    scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       i++;
   }
        printf(" the number of digits are:%d",i);
    
    return 0;
}
