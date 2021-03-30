#include<stdio.h>
void main()
{
int a ,b,c;
printf("enter the numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("a=%d",a);
printf("b=%d",b);
}
