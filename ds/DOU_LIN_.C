/* linked list */
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
void insert_at_end()
{
  struct node *n,*t;
  n=(struct node *)malloc(sizeof(struct node));
  printf("Enter a number: ");
  scanf("%d",&n->data);
  if (START==NULL)
  {
    START=n;
    printf("Node with value=%d is added at address=%d",n->data,n);
  }
  else
  {
    t=START;
    while(t->next!=NULL)
    {
      t=t->next;
    }
    t->next=n;
    n->prev=t;
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
void delete_at_end()
{
  struct node *t,*r;
  if(START==NULL)
  {
    printf("List is Empty");
  }
  else
  {
    t=START;
    while(t->next!=NULL)
    {
      r=t;
      t=t->next;
    }
    r->next=NULL;
    printf("Node value=%d and address=%d",t->data,t);
    free(t);
    if(START->next==NULL)
    {
      START=NULL;
    }
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
      l=l++;
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
    printf("\n1. Insert a node at begining");
    printf("\n2. Insert a node at End");
    printf("\n3. Delete a node from begining");
    printf("\n4. Delete a node from end");
    printf("\n5. View Duobly linked list");
    printf("\n6. Exit ");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	    insert_as_first_node();
	    break;
      case 2:
	    insert_at_end();
	    break;
      case 3:
	    delete_first_node();
	    break;
      case 4:
	    delete_at_end();
	    break;
      case 5:
	    viewList();
	    break;
      case 6:
	    exit(0);
      default:
	     printf("Invalid choice");
    }
    getch();
  }
}







