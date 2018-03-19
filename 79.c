#include <stdio.h>
int main() 
{
	int n,d,i,e,c;
	printf("enter the number:");
	scanf("%d\n%d",&n,&d);
	c=n*d;
	printf("%d",c);
	for(i=0;i<c;i++)
	{
	  if(c==(i*i))
	  {
	printf("\n yes");
	}
	else
{
    printf("no");	}
	}
	return 0;
}
