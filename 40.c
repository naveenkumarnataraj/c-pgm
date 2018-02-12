
#include <stdio.h>
#include<conio.h>
int main()
{
int i, b, x= 0, y= 1, t;
    printf("Enter the number of terms: ");
    scanf("%d", &b);
    printf("Fibonacci Series: ");
    for (i = 1; i <= b; ++i)
    {
     printf("%d", x);
         t= x+ y;
        x= y;
        y= t;
    }
    return 0;
    }
