
#include <stdio.h>

main()
{
    int c,i;
    char b[20];
    printf("how many time to be printed\n");
    scanf("%d",&c);
    printf("enter the word to be printed\n");
    scanf("%s",&b);
    for(i<0;i<=c;i++)
    {
        printf("%s\n",b);
    }
    return 0;
}



