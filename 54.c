#include<stdio.h>
#include<conio.h>
int main()
{
        int num,even;
        printf("enter the number");
        scanf("%d",&num);
        if(num%2==0)
        {
                even=num;
                printf("the given num is even %d",even);
        }
        else 
        {
                even=num -1;
                printf("the nearest even num is %d",even);
        }
        return 0;
}
