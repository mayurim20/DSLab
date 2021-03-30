#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
int d;
struct node * link;
};
struct node*create(int x)
{
struct node*newnode;
newnode=((struct node*)malloc(sizeof(struct node)));
newnode->d=x;
newnode->link=NULL;
return(newnode);
}
void main()
{
int choice,d,key;
struct node*newnode,*start=NULL,*ptr,*temp;
while(1)
{
printf("menu \n");
printf("insertion");
printf("1.at front \n");
printf("2.at any position \n");
printf("3.at end \n");
printf("deletion");
printf("4.at front \n");
printf("5.at any position \n");
printf("6.at end \n");
printf("7.display \n");
printf("8.exit \n");
printf("enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
 printf("enter data");
 scanf("%d",&d);
 newnode=create(d);
 if(start!=NULL)
 newnode->link=start;
 start=newnode;
 break;
 case 2:
 printf("enter data");
 scanf("%d",&d);
 newnode=create(d);
 printf("\n enter key ");
 scanf("%d",&key);
 ptr=start;
 while((ptr->d!=key)&&(ptr->link!=NULL))
 {
 ptr=ptr->link;
 {
 if(ptr->link==NULL)
 {
printf("\n key not found");
free(newnode);
}
else
{
newnode->link=ptr->link;
ptr->link=newnode; 
}
break;
case 3:
printf("enter data");
scanf("%d",&d);
newnode=create(d);
ptr=start;
while(ptr->link!=NULL)
ptr=ptr->link;
ptr->link=newnode;
break;
case 4:
if(start==NULL)
printf("list is empty");
else
{
ptr=start;
start=ptr->link;
printf("node deleted=%d",ptr->d);
free(ptr);
}
break;
case 5:
if(start=NULL)
printf("list is empty");
else
{
printf("enter key");
scanf("%d",&key);
ptr=start;
while(ptr!=NULL)
{
if(ptr->d!=key)
{
temp=ptr;
ptr=ptr->link;
}
else
{
printf("\n node with key %d is deleted",ptr->d);
temp->link=ptr->link;
free(ptr);
break;
}
}
if(ptr=NULL)
{
printf("\n node don't exist");
}
break;
case 6:
if(start==NULL)
printf("\n list empty");
else if(start->link==NULL)
{
ptr=start;
start=NULL;
printf("\n node deleted is %d",ptr->d);
free(ptr);
}
else
{
ptr=start;
while(ptr->link!=NULL)
{
temp=ptr;
ptr=ptr->link;
}
temp->link=NULL;
printf("\n node deleted is %d",ptr->d);
free(ptr);
}
break;
case 7:
if(start==NULL)
{
printf("\n list is empty");
}
else
{
printf("\n list:\n");
ptr=start;
while(ptr!=NULL)
{
printf("%d\n",ptr->d);
ptr=ptr->link;
}
}
}
case 8:
printf("\n existing---");
exit(0);
}
}
}
}
}


                              
