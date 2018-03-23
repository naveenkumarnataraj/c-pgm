#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
    int e,i;
    scanf("%[^\t\n]s",&a);
   e=strlen(a);
    a[0]=a[0]-32;
    for(i=0;i<e;i++)
    {
      if(a[i]==' ')
      {
          a[i+1]=a[i+1]-32;
      }
    }
    printf("%s",a);
	
	return 0;
}
