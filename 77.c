#include <stdio.h>
int main() 
{
	int n,i;
	printf("enter the string:");
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
	   if(n%i==0)
	{
	printf("\n%d",n);
	}
	}
	return 0;
}
