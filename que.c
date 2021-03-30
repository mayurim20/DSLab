#include<stdio.h>
#include<stdlib.h>
void main()
{
int q[20],c,rear=0,front=0,size,item,i;
printf("enter the size of the queue");
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
      if(rear==size)
      {
      printf("queue is full \t");
      }
      else
      {
      if(rear=0 && front==0)
      {
      front=1;
      }
      rear=rear+1;
      q[rear]=item;
      }
      break;
case 2:{
        if(front==0)
        {
        printf("queue is empty");
        }
        else
        {
        item=q[front];
        if(front==rear)
        {
        rear=0;
        front=0;
        }
        else
        {
        front=front+1;
        }
        }
        break;
        }
case 3:if (front==0)
       {
       printf("queue is empty");
       }
       else
       {
       printf("available queue is \t");
       for(i=front;i<rear;i++)
       {
       printf("%d \t",q[i]);
       }
       break;
       }
case 4:exit(0);
       }
       }         
       } 
