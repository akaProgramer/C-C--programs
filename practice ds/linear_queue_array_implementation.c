#include<stdio.h>
#include<stdlib.h>
int q[5],front=-1,rear=-1;
void enqueue()
{
    int item;
    if(rear<4)
    {
        printf("Enter a value for queue: ");
        scanf("%d",&item);
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        q[rear]=item;
        printf("%d is added to queue: ",item);
    }
    else
    {
        printf("Overflow");
    }
}
void dequeue()
{
    int item;
    if(front!=-1)
    {
        item=q[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
           front++;
        }
        printf("%d deleted from the queue",item);
    }
    else
    {
        printf("underflow");
    }
}
void traverse()
{
    int i;
    if(front==-1)
    {
        printf("Underflow");
    }
    else
    {
        for(i=front; i<=rear; i++)
        {
            printf("%d\n",q[i]);
        }
    }
}
int main()
{
  int ch;
  while(1)
  {
    system("cls");
    printf("\n1. Enqueue");
    printf("\n2. Dequeue");
    printf("\n3. Traverse");
    printf("\n4. Exit");
    printf("\nEnter a choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: enqueue();
	      break;
      case 2: dequeue();
	      break;
      case 3: traverse();
	      break;
      case 4: exit(0);
	      break;
      default: printf("Invalid Entry");
	       break;
    }
    getch();
  }
}

