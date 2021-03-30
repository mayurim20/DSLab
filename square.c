#include<stdio.h>
void main()
{
int m[5],s[5],i;
printf("enter the five no:");
for(i=0;i<5;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<5;i++)
{
s[i]=m[i]*m[i];
}
printf("number \t square of the no");
for(i=0;i,5;i++)
{
printf("%d\t%d\n",m[i],s[i]);
}
}
