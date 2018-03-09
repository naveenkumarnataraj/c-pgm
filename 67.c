
#include<stdio.h>
int main(void)
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	i=1;
	while(n%10!=0)
{
    n=i+n;
}	
	printf("\n%d",n);
	
	return 0;
}
