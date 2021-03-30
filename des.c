#include<stdio.h>
void main()
{
int m[5],i,j,t;
printf("enter the 5 nos");
for(i=0;i<5;i++)
{
scanf("%d",&m[i]);
}
for(i=1;i<5;i++)
{
for(j=0;i<5-1;j++)
{
if(m[j]<m[j+1])
{
t=m[j];
m[j]=m[j+1];
m[j+1]=t;
}
}
}
printf("no in descending order \n");
for(i=0;i<5;i++)
printf("%d\n",m[i]);
}
