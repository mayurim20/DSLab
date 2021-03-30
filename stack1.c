#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20],c,top=-1,size,item,i;
printf("enter the size of the stack");
scanf("%d",&size);
while(1)
{
printf("\n 1.insertion \n");
printf("\n 2.deletion \n");
printf("\n 3.display \n");
printf("\n 4.exit \n");
printf("enter the choice");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter the item");
      scanf("%d",&item);
      if(top>=size)
      printf("stack is full");
      else
      top=top+1;
      a[top]=item;
      break;
case 2:if(top<1)
      printf("stack is empty");
      else
      item=a[top];
      top=top-1;
      break;
case 3:printf("stack");
       for(i=0;i<=top;i++)
       printf("%d\t",a[i]);
       break;
case 4:exit(0);
}
}
}  
