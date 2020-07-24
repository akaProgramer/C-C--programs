/* Linked list */
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int length();
struct node
{
  int info;
  struct node *link;
};
struct node *START=NULL;
struct node*  createNode()
{
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}
void insertNode()
{
  struct node *temp, *t;
  temp=createNode();
  printf("Enter a number: ");
  scanf("%d",&temp->info);
  printf("Node is added with value=%d",temp->info);
  temp->link=NULL;
  if (START==NULL)
  {
    START=temp;
    printf(" at address %d",START);
  }
  else
  {
    t=START;
    while(t->link!=NULL)
    {
      t=t->link;
    }
    t->link=temp;
    printf(" at address=%d",t->link);
  }
}
void insertBegin()
{
  struct node *temp;
  temp=createNode();
  printf("Enter a value: ");
  scanf("%d",&temp->info);
  temp->link=NULL;
  if(START==NULL)
  {
    START=temp;
    printf("Node is added value=%d and address=%d",temp->info,temp);
  }
  else
  {
    temp->link=START;
    START=temp;
    printf("Node is added value=%d and address=%d",temp->info,temp);
  }
}
void insertLocation()
{
  struct node *temp,*p;
  int loc,i=1;
  printf("Enter a location: ");
  scanf("%d",&loc);
  if(START==NULL && loc==1)
  {
    temp=createNode();
    printf("Enter a value: ");
    scanf("%d",&temp->info);
    temp->link=NULL;
    START=temp;
    printf("Node is added value=%d at location=%d and address=%d",temp->info,loc,temp);
  }
  else if(length()<loc)
  {
    printf("Invalid Location");
  }
  else
  {
    temp=createNode();
    printf("Enter a value: ");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if (loc==1)
    {
       temp->link=START;
       START=temp;
       printf("Node is added value=%d at location=%d and address=%d",temp->info,loc,temp);
    }
    else
    {
      p=START;
      while(i<loc-1)
      {
	p=p->link;
	i=i++;
      }
      temp->link=p->link;
      p->link=temp;
      printf("Node is added value=%d at location=%d and address=%d",temp->info,loc,temp);
    }
  }
}
void traverse()
{
    struct node *t;
    if(START==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            printf("Node value=%d and address=%d\n",t->info,t);
            t=t->link;
        }
    }
}
int length()
{
  struct node *t;
  int len=0;
  if(START==NULL)
  {
    return len;
  }
  else
  {
    t=START;
    while(t!=NULL)
    {
      len++;
      t=t->link;
    }
    return len;
  }
}

int main()
{
  int choice;
  while(1)
  {
      system("cls");
      printf("\n1. Add Node to the list at End");
      printf("\n2. Add Node at Begnning");
      printf("\n3. Add a node at particular location");
      printf("\n4. Traverse");
      printf("\n5. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	case 1:
	      insertNode();
	      break;
	case 2:
	      insertBegin();
	      break;
	case 3:
	      insertLocation();
	      break;
    case 4:
          traverse();
          break;
	case 5:
	      exit(0);
	      break;
	default:
	       printf("Invalid choice");
      }
      getch();
   }

}
