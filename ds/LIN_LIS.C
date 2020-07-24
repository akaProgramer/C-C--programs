/* Linked list */
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node
{
  int info;
  struct node *link;
};
int length();
int viewList();
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

  if(START==NULL)
  {
    printf("List is empty please add some nodes");
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
    if (START==NULL && loc==1)
    {
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
void search()
{
  struct node *temp;
  int s,i,f=0;
  if (START==NULL)
  {
    printf("List is empty");
  }
  else
  {
    printf("Enter a number for searching: ");
    scanf("%d",&s);
    temp=START;
    for(i=1; i<=length(); i++)
    {
      if (temp->info==s)
      {
	    printf("Node fonud at location=%d and address=%d",i,temp);
	    f++;
      }
      temp=temp->link;
    }
    if(f<1)
    {
        printf("%d not found",s);
    }
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
void deleteAllNodes()
{
  struct node *t,*r;
  if(START==NULL)
  {
    printf("List is empty");
  }
  else
  {
    t=START;
    while(t!=NULL)
    {
      r=t;
      t=r->link;
      printf("Node with value=%d is added at address=%d\n",r->info,r);
      free(r);
    }
    START=NULL;
    printf("All Nodes are Deleted");
  }
}


void deleteLocation()
{
  struct node *t,*p,*q;
  int i=1,loc;
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
      printf("Node at %d value=%d address=%d is deleted",loc,t->info,t);
      free(t);
    }
    else
    {
      p=START;
      while(i<loc-1)
      {
	p=p->link;
	i++;
      }
      q=p->link;
      p->link=q->link;
      q->link=NULL;
      printf("Node at %d value=%d address=%d is deleted",loc,q->info,q);
    }
  }
}
int viewList()
{
  struct node *t;
  int len=0;
  if(START==NULL)
  {
    printf("List is Empty");
  }
  else
  {
    t=START;
    while(t!=NULL)
    {
      len++;
      printf("\nNode %d with value=%d and address=%d ",len,t->info,t);
      t=t->link;
    }
    printf("\n%d Nodes are present",len);
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
      printf("\n1. Add Node to the list");
      printf("\n2. Add Node at Begnning");
      printf("\n3. Add a node at particular location");
      printf("\n4. Searching of node");
      printf("\n5. Delete First Node");
      printf("\n6. Delete the node from particular location");
      printf("\n7. Delete all nodes present in the list");
      printf("\n8. View List");
      printf("\n9. Exit");
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
	      search();
	      break;
	case 5:
	      deleteNode();
	      break;
	case 6:
	      deleteLocation();
	      break;
	case 7:
	      deleteAllNodes();
	      break;
	case 8:
	      viewList();
	      break;
	case 9:
	     exit(0);
	default:
	       printf("Invalid choice");
      }
      getch();
  }
}


