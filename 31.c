 #include<stdio.h>
int main()
{
int d,n1,n2,n3;
char a[100],b[100],c[100];
scanf("%s %s %s",&a,&b,&c);
n1=strlen(a);
n2=strlen(b);
n3=strlen(c);
d=n1+n2+n3;
printf("%d",d);
return 0;
}
