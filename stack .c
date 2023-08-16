#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL,*temp;
void push(int data);
void pop();
void display();
void main()
{
    int no,ch,e;
     printf("\n 1 - Push\n 2 - Pop \n 3 - Dipslay\n 4 - Exit");
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d",&ch);
         switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:display();
            break;
        case 4:exit(0);
}
}
}
void push(int d)
{
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->data = d;
    if (top == NULL)
    {
        temp->next = NULL; 
    }
    else
    {
        temp->next = top;
    }
top = temp;
}
void display()
{
    temp = top;
 
    if (top == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
 }

void pop()
{
  if (top==NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
top=top->next;
}


PROGRAM:
#include <stdio.h>
int main()
{
 int c, first, last, middle, n, search, array[100];
 printf("Enter number of elements\n");
 scanf("%d", &n);
 printf("Enter %d integers\n", n);
 for (c = 0; c < n; c++)
 scanf("%d", &array[c]);
 printf("Enter value to find\n");
 scanf("%d", &search);
 first = 0;
 last = n - 1;
 middle = (first+last)/2;
 while (first <= last) {
 if (array[middle] < search)
 first = middle + 1;
 else if (array[middle] == search) {
 printf("%d found at location %d.\n", search, middle+1);
 break;
 }
 else
 last = middle - 1;
 middle = (first + last)/2;
 }
 if (first > last)
 printf("Not found! %d isn't present in the list.\n", search);
 return 0
