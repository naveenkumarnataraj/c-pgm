#include<stdio.h>
#include<string.h>
int main()
{
	int e,x,i;

	char a[100];
	gets(a);
	scanf("%d",&e);
	l=strlen(a);
	x=l-e;
	for(i=x;i<l;i++)
	{
		printf("%c",a[i]);
	}
	return(0);	
}
