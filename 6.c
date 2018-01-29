#include <stdio.h>
int main()
{
    int anum;
    printf("Enter a anum: ");
    scanf("%d",&anum);
    if(anum%4 == 0)
    {
        if(anum%100 == 0)
        {
            // anum is divisible by 400, hence the year is a leap year
            if ( anum%400 == 0)
                printf("%d is a leap year.", anum);
            else
                printf("%d is not a leap year.", anum);
        }
        else
            printf("%d is a leap year.", anum);
    }
    else
        printf("%d is not a leap year.", anum);
      return 0;
}
