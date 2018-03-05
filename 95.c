#include <stdio.h>
int main()
{
    int p,n,r,value;
    printf("enter the principle amount:");
    scanf("%d",&p);
    printf("enter the time period:");
    scanf("%d",&n);
    printf("enter the interst rate:");
    scanf("%d",&r);
    value=(p*n*r)/100;
    printf(" the fool rate for the principle amount was:%d",value);

    return 0;
}


