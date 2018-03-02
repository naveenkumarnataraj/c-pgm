#include <stdio.h>
int main()
{
    int i,n,max;
    printf("enter the value");
    scanf("%d",&n);
if (n%2==0)
{
 i=n/2  ; 
        printf(" the number of digits are:%d",i);
}
else
{
    printf(" the given is not divisable by 2");
}
    return 0;
}
