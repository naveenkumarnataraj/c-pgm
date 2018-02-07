#include<stdio.h>
void main()
{
  char a[1000];
  int b, count;
  printf("\nEnter any text or sentenses");
  scanf ("%d",&b);
  gets(a);
  for(char i=0;i!='\0';i++)
  {
    if(a[i]==' ')
    b++;
  }
  printf("\nNo.of words present in the text is : %d",b+1);
}
