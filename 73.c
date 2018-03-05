#include <stdio.h>
int main()
{
    int n,i,k;
    printf("enter the value:");
   scanf("%d",&n);
   printf("enter the value\t ");
   scanf("%d %d",&i,&k);
   if(i<n)
{
    if(n<k)
    {
    printf("yes");}
    else
    {
        printf("no");
    }
}
else
{
    printf("no");
}
    return 0;
}

