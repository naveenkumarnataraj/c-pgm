#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the value:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i%2==0)
    i++;
    }
    if(n%i==0)
{
    printf("the given  is not a prime ");
}
else
{
    printf("the give numbers is  prime:");
}
    return 0;
}

