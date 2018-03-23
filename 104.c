#include<stdio.h>
int main()
{
        int n,k,d=1,i;
        scanf("%d\n%d",&n,&k);
        for(i=0;i<k;i++)
        {
                d=d*n ;
        }
        printf("%d",d);
        return 0;
}
