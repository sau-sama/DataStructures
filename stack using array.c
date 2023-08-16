#include<stdio.h>
#include<stdlib.h>
void main()
{
int stk[10],top=-1,c,ch,i;
while(1)
{
printf("\nenter choice 1.push,2.pop,3.display,4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nenter element");
    scanf("%d",&c);
    if(top==10)
    {
    printf("\nstack overloaded");
    break;
    }
    stk[++top]=c;
    break;
case 2:if(top==-1)
    {
    printf("\nstack underflow");
    break;
    }
    printf("element poped is %d",stk[top--]);
    break;
case 3:for(i=0;i<=top;i++)
    printf("%d   ",stk[i]);
    break;
case 4:exit(1);
}
}
}

OUTPUT:

enter choice 1.push,2.pop,3.display,4.exit1

enter element12

enter choice 1.push,2.pop,3.display,4.exit1

enter element23

enter choice 1.push,2.pop,3.display,4.exit3
12   23   
enter choice 1.push,2.pop,3.display,4.exit2
element poped is 23
enter choice 1.push,2.pop,3.display,4.exit3
12   
enter choice 1.push,2.pop,3.display,4.exit4
