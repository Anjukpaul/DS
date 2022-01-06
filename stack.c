#include<stdio.h>
int stack[100],top=-1,n,x;
void push();
void pop();
void display();
void main()
{
int ch;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    do
    {
    printf("\n STACK OPERATIONS USING ARRAY\n 1.PUSH\n 2.POP\n 3.DISPLAY\nEnter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:push();
            break;
    case 2:pop();
            break;
    case 3:display();
            break;
    default:printf("Invalid choice\n");
            break;
    }
    }while(ch<4);
}
void push()
{
    if((top>=n-1)){
        printf("Stack is full\n");}
    else{
        printf("Enter the element in the stack\n");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
        printf("Element pushed successfully\n");
        }
}
void pop()
{
if(top==-1)
{
printf("Stack is empty\n");
}
else
{
printf("the deleted element is %d ",stack[top]);
top=top-1;
}
}
void display()
{
if(top==-1)
{
printf("Stack is empty\n");
}
else
{
printf("The elements in the stack is \n");
for(int i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
}
}
