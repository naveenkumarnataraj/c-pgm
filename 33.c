#include<stdio.h>
int main()
{
    char a[100];
    int i,b;
    printf("enter the essay\n");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            b++;
        }
    }
        printf("%d",b);
    
    return 0;
}
