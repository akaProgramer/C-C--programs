#include<stdlib.h>
#include<stdio.h>
int stack[6],top=-1;
void push()
{
    int item;
    if(top==4)
    {
        printf("overflow");
    }
    else
    {
        printf("Enter a item in the stack: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("%d is added",item);
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow");
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
        printf("underflow");
    }
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
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

