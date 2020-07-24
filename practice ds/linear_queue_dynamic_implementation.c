#include<stdlib.h>
#include<stdio.h>
struct q
{
    int rear,front,capacity,*array;
};
struct q* createq(int cap)
{
    struct q *Q;
    Q=malloc(sizeof(struct q));
    Q->front=-1;
    Q->rear=-1;
    Q->capacity=cap;
    Q->array=malloc(sizeof(int)*Q->capacity);
    return Q;
}
void enqueue(struct q *Q)
{
    int item;
    if(Q->rear<Q->capacity-1)
    {
        printf("Enter a value for stack: ");
        scanf("%d",&item);
        if(Q->front==-1)
        {
            Q->front=0;
            Q->rear=0;
        }
        else
        {
            Q->rear=Q->rear+1;
        }
        Q->array[Q->rear]=item;
        printf("%d is added to queue: ",item);
    }
    else
    {
        printf("overflow");
    }

}
void dequeue(struct q *Q)
{
    int item;
    if(Q->front!=-1)
    {
        item=Q->array[Q->front];
        if(Q->rear==Q->front)
        {
            Q->rear=-1;
            Q->front=-1;
        }
        else
        {
            Q->front=Q->front+1;
        }
        printf("%d is deleted from queue",item);
    }
    else
    {
        printf("Underflow");
    }
}
void traverse(struct q *Q)
{
    int i;
    if(Q->front==-1)
    {
        printf("Underflow");
    }
    else
    {
        for(i=Q->front;i<=Q->rear;i++)
        {
            printf("%d\n",Q->array[i]);
        }
    }
}
int main()
{
  int ch,cap;
  struct q *Q;
  Q=createq(4);
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
      case 1: enqueue(Q);
	      break;
      case 2: dequeue(Q);
	      break;
      case 3: traverse(Q);
	      break;
      case 4: exit(0);
	      break;
      default: printf("Invalid Entry");
	       break;
    }
    getch();
  }
}


