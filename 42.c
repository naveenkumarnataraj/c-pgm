#include <stdio.h>

main()
{
    char b[20],c[20];
    printf("enter the string 1\n");
    scanf("%s",&b);
    printf("enter the string 2\n");
    scanf("%s",&c);
    if(b==c)
    {
        printf("%s",b);
    }
   else if(b>c)
    {
        printf("%s\n",b);
    }
    else 
    {
        printf("%s",c);
    }
    return 0;
}
