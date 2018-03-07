#include <stdio.h>
#include<string.h>
int main() 
{
	char a[10];
	int t,i,num;
	scanf("%s",a);
	scanf("%d",&num);
	t=strlen(a);
    for(i=0;i<num;i++)
    {
        printf("%c",a[i]);
    }
	return 0;
}
