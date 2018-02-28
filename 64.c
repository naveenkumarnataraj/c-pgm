include <stdio.h>
int main()
{
    int n,m,add;
    printf("enter the value:");
    scanf("%d",&n);
    printf("enter the value:");
    scanf("%d",&m);
    add=n+m;
    if(add%2==0)
{
    printf(" the give numbers addition is even:");
}
else
{
    printf("the given number addition is odd:");
}
    return 0;
}
