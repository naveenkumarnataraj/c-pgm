#include<stdio.h>
int main()
{
	int e,f,temp;
	printf("enter e and f\n");
	scanf("%d\n%d",&e,&f);
	temp=e;
	e=f;
	f=temp;
	printf("%d\n%d",e,f);
	return 0;
}
