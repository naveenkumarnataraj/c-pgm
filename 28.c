#include<stdio.h>
int main()
{
	int i,a[100],e;
	scanf("%d",&e);
	for(i=0;i<e;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<e;i++)
	{
		printf("%d %d\e",a[i],i);
	}
  return 0;
}
