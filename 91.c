#include <stdio.h>
int main()
{
    int l,b,h,area;
    printf("enter the length value\t bradth\t height:");
    scanf("%d%d%d",&l,&b,&h);
    area=l*b*h;
    printf(" the area of the cuboid is:%d",area);

    return 0;
}
