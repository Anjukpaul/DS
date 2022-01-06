#include<stdio.h>
void enqueue();
void dequeue();
void display();
int isfull();
int isempty();
int rear=-1;
int front=-1;
int queue[100],n,x;
void main()
{
int ch;
printf("Enter the size of the queue\n");
scanf("%d",&n);
do
{
printf("\n\nQUEUE OPERATIONS\n\n1-Enqueue\n2-Dequeue\n3-Display\nEnter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
        break;
case 2:dequeue();
        break;
case 3:display();
        break;
default:printf("Invalid choice\n");
break;
}
}while(ch<4);
}
void enqueue()
{
  if(isfull())
  {
       printf("\nQueue is full");
  }
  else{

        if(front==-1)

            front=0;

            printf("\n enter the elements");
            scanf("%d",&x);
             rear=(rear+1)%n;
            queue[rear]=x;
            printf("\n insert element is %d",x);

  }
}
void dequeue()
{
    int x;
    if(isempty())
    {
        printf("\n queue is empty");
         return 1;
    }
    else
    {
        x=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
        printf("\n deleted element is %d",x);

    }
}
void display()
{
    int i;
    if(isempty())
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n elements in the queue are:");
        for(i=front;i!=rear;i=(i+1)%n)
        {
        printf("%d\t",queue[i]);
        }
         printf("%d\t",queue[i]);

}
}
int isfull()
{
    if ((front==rear+1)||(front==0&&rear==n-1))
        return 1;
    else
        return 0;
}
int isempty()
{
    if(front==-1)
        return 1;
    else
        return 0;
}
