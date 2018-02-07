#include<stdio.h>
int main()
{
	int c,b,temp;
	printf("enter c and b\n");
	scanf("%d\n%d",&c,&b);
	temp=c;
	c=b;
	b=temp;
	printf("%d\n%d",c,b);
	return 0;
}
