#include<stdio.h>
int main()
{
int * pc, c;
pc = &c;
c = 1;
printf("%d", c);    
printf("%d", *pc);  
}
