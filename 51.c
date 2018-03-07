#include <stdio.h>
 
int main() 
{
	int n,r,rev=0;
	printf("\n enter the number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
	 r=n%10;
	 rev=(rev*10)+r;
	 n=n/10;
	    
	}
	n=rev;
	while(n!=0)
	{
	    r=n%10;
	    printf("%d",r);
	    n=n/10;
	}
 
	return 0;
}
