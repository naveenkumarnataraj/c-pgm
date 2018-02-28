#include <stdio.h>
int main()
{
    int n,m,i;
    printf("enter the value:");
    scanf("%d",&n);
    printf(" enter the value");
    scanf("%d",&m);
    i=n-m;
    if(i%2==0)
{
    printf("the given num is even ");
}
else
{
    printf("the given num is odd");
}
    return 0;
}

