#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct ArrayStack

{
    int top;
    int capacity;
    int *array;
};
    struct ArrayStack* createstack(int cap)
{
    struct ArrayStack  *stack;
    stack= (struct ArrayStack *)malloc(sizeof(struct ArrayStack) );
    stack ->capacity = cap;
    stack->top = -1;
    stack->array =(int *) malloc(sizeof(int)*stack->capacity);
    return(stack);
}
int IsFull(struct ArrayStack *stack)
{
    if(stack->top == stack->capacity-1)
    return(1) ;
    else
    return(0);
}
int IsEmpty(struct ArrayStack *stack)
{
    if(stack->top == -1)
    return(1);
    else
    return(0) ;
}
void Push(struct ArrayStack *stack,int item)
{
    if(!IsFull(stack))
    {
	stack->top++;
	stack->array[stack->top] = item;
	printf("%d is added",item);
    }
    else
    printf("Stack Overflow");
}
int PoP(struct ArrayStack *stack)
{
    int item;
    if(!IsEmpty(stack))
    {
	item = stack->array[stack->top] ;
	stack->top--;
	return(item);
    }
    else
    return(-1);
   // printf("Stack Underflow");
}
  main()
  {
       int choice,item,ok;
       struct ArrayStack *stack;
       stack = createstack(5);
       while(1)
       {
	  //clrscr();
	  printf("\n1. PUSH ");
	  printf("\n2. POP");
	  printf("\n3. Exit");
	  printf("\nEnter Your Choice :-");
	  scanf("%d",&choice);
	  printf("enter no.: ");
	  scanf("%d",&ok);
	  switch(choice)
	  {
	      switch(ok)
	      {
	     case 1:
		    printf("\nEnter A Number:-");
		    scanf("%d",&item);
		    Push(stack,item);
		    break;
	    case 2:
		    item = PoP(stack);
		    if(item == -1)
		    printf("\nStack Is Empty");
		    else
		    printf("\nPoped value:- %d",item);
		    break;
	    case 3:
		   exit(0);
		default:
               printf("invalid Entry");



            break;
	      }
	  }
	  getch();
       }
  }
