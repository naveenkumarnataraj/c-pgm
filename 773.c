#include<stdio.h>
int main()
{
    int n,l,r;
    printf("enter the number n:");
    scanf("%d",&n);
    printf("enter the number l:");
    scanf("%d",&l);
    printf("enter the number r:");
    scanf("%d",&r);
    if(l<n &&n>r)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
