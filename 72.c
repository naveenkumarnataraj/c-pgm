#include <stdio.h>

int main(void) 
{
char s[50];
int i=0,count=0,flag=0;
printf("\n enter the given string:");
scanf("%s",&s);
while(s[i]!='\0')
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("\nyes");
}
else
{
	printf("\n no");
}
return 0;
}
