#include<stdio.h>
int main()
{
int a[5]={34,56,22,18,67};
int i;
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
printf("\n");
for(i=4;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
