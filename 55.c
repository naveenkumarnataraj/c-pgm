#include<stdio.h>
#include<conio.h>
int main()
{
        int n,m,z;
        printf("\n enter the  value:\n enter the value:");
        scanf("\n%d\n%d",&n,&m);
        z=n*m;
        if(z%2==0)
        {
                printf("the given two  numbers product is even %d",z);
        }
        else 
        {
                printf("the given two numbers product is odd: %d",z);
        }
        return 0;
}
