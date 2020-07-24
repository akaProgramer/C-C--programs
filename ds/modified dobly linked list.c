/*Doubly linked list */
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *prev,*next;
};
struct node *START=NULL;
void insert_as_first_node()
{
  struct node *n;
  n=(struct node *)malloc(sizeof(struct node));
  printf("Enter a number: ");
  scanf("%d",&n->data);
  n->prev=NULL;
  n->next=NULL;
  if (START==NULL)
  {
    START=n;
    printf("Node with value=%d is added at address=%d",n->data,n);
  }
  else
  {
    START->prev=n;
    n->next=START;
    START=n;
    printf("Node with value=%d is added at address=%d",n->data,n);
  }
}
void delete_first_node()
{
  struct node *t;
  if(START==NULL)
  {
    printf("List is Empty");
  }
  else
  {
    t=START;
    START=START->next;
    START->prev=NULL;
    printf("Node with value=%d address=%d is deleted",t->data,t);
    free(t);
  }
}
void viewList()
{
  struct node *t;
  int l=0;
  if(START==NULL)
  {
    printf("List is Empty");
  }
  else
  {
    t=START;
    while(t!=NULL)
    {
      printf("Node with value %d and address=%d\n",t->data,t);
      t=t->next;
      l++;
    }
    printf("%d Nodes present\n",l);
  }
}
int main()
{
  int ch;
  while(1)
  {
    system("cls");
    printf("\n1. Insert a node");
    printf("\n2. Delete a node");
    printf("\n3. View Duobly linked list");
    printf("\n4. Exit ");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	    insert_as_first_node();
	    break;
      case 2:
	    delete_first_node();
	    break;
      case 3:
	    viewList();
	    break;
      case 4:
	    exit(0);
      default:
	     printf("Invalid choice");
    }
    getch();
  }
}
