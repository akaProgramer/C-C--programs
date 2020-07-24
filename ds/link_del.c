/*Deletion Linked list */
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
void deleteLastNode()
{
  struct node *r,*p;
  if(START==NULL)
  {
    printf("List is empty");
  }
  else
  {
    r=START;
    while(r->link!=NULL)
    {
        p=r;
        r=r->link;
    }
    p->link=NULL;
    printf("Node is deleted with value=%d and address=%d",r->info,r);
    free(r);
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
void deleteNode()
{
  struct node *r;
  if(START==NULL)
  {
    printf("List is empty");
  }
  else
  {
    r=START;
    START=r->link;
    printf("Node is deleted with value=%d and address=%d",r->info,r);
    free(r);
  }
}
void deleteLocation()
{
  struct node *t,*p,*q;
  int i,loc;
  if(length()==0)
  {
    printf("List is Empty");
  }
  else
  {
    printf("Enter a location: ");
    scanf("%d",&loc);
    if(loc>length())
    {
      printf("Invalid location");
    }
    else if(loc==1)
    {
      t=START;
      START=START->link;
      t->link=NULL;
      printf("Node at %d value=%d address=%d is deleted",loc,t->info,t);
      free(t);
    }
    else
    {
      p=START;
      for(i=0; i<loc-2; i++)
      {
          p=p->link;
      }
      q=p->link;
      p->link=q->link;
      q->link=NULL;
      printf("Node at %d value=%d address=%d is deleted",loc,q->info,q);
      free(q);
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
int main()
{
  int choice;
  while(1)
  {
      system("cls");
      printf("\n1. Add Node to the list");
      printf("\n2. Delete Node from beginning");
      printf("\n3. Delete node from End");
      printf("\n4. Delete Node from particular location");
      printf("\n5. Traverse");
      printf("\n6. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	case 1:
	      insertNode();
	      break;
	case 2:
	      deleteNode();
	      break;
    case 3:
          deleteLastNode();
          break;
	case 4:
	      deleteLocation();
	      break;
    case 5:
	      traverse();
	      break;
	case 6:
	      exit(0);
	      break;
	default:
	       printf("Invalid choice");
      }
      getch();
   }

}

