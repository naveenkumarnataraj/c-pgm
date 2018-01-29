#include <stdio.h>
int main()
{
    int e, i, sum = 0;   
    printf("Enter a positive integer: ");
    scanf("%d",&e);

    for(i=1; i <= e; ++i)
    {
        sum += i;   // sum = sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}
