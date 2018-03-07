

#include <stdio.h>

int main()
{
    int n,i,a[10],avg,s=0;
    printf("how many numbers");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    s=s+a[i];
}
avg=s/n;
printf("the avg amoung the given value is:%d",avg);
    return 0;
}
