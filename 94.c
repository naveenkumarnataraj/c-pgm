#include<stdio.h>
int main()
{
    int i,a[50],b,s;
    scanf("%d\n%d",&b,&s);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        while(i==s)
        {
            
    printf("%d",a[i]);
    break;
        }
    }
    return 0;
}
