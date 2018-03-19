#include <stdio.h>
int main(void) 
{
	float n;
	int b;
	scanf("%f",&n);
	if(n<0)
	{
	    b=(int)(n-0.5);
	}
	else
	{
	    b=(int)(n+0.5);
	}
	printf("%d",b);
	return 0;
}
