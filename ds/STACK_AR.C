#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void traverse();
int stack[5];
int top=-1;
void push()
{
  int item;
  if(top==4)
  {
    printf("Stack Overflow");
  }
  else
  {
    printf("Enter a element to be inserted: ");
    scanf("%d",&item);
    top++;
    stack[top]=item;
    printf("%d is added in stack",item);
  }
}
void pop()
{
  int item;
  if(top==-1)
  {
    printf("Stack is Underflow");
  }
  else
  {
    item=stack[top];
    top--;
    printf("%d is deleted",item);
  }
}
void traverse()
{
  int i;
  if(top==-1)
  {
    printf("Stack is empty");
  }
  else
  {
    for (i=top; i>=0; i--)
    {
      printf("\n %d",stack[i]);
    }
  }
}
int main()
{
  int ch;
  while(1)
  {
    system("cls");
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Traverse");
    printf("\n4. Exit");
    printf("\nEnter a choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push();
	      break;
      case 2: pop();
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
