#include<stdio.h>
void main()
{
int m[5],l,i;
printf("enter the five no:");
for(i=0;i<5;i++)
{
scanf("%d",&m[i]);
}
l=m[0];
for(i=0;i<5;i++)
{
if(l>m[i])
l=m[i];
}
for(i=0;i<5;i++)
{
printf("%d\t",m[i]);
}
printf("\n %d is the smallest no:",l);
}
