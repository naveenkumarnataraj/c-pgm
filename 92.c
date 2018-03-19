#include<stdio.h>
int main()
{
    int i,a[50],b,s=0;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
s=s+a[i];
    }
    printf("%d",s);
    return 0;
}
