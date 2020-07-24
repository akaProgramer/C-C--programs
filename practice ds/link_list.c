#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *START=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    printf("Enter a value for a node: ");
    scanf("%d",&n->info);
    n->link=NULL;
    return n;
}
void insert_at_begin()
{
    struct node *temp;
    temp=createnode();
    if(START==NULL)
    {
        START=temp;
        printf("Node added with value=%d address=%d",temp->info,temp);
    }
    else
    {
        temp->link=START;
        START=temp;
        printf("Node added with value=%d address=%d",temp->info,temp);
    }
}
void insert_at_end()
{
    struct node *temp,*t;
    temp=createnode();
    if(START==NULL)
    {
        START=temp;
        printf("Node added with value=%d address=%d",temp->info,temp);
    }
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
        printf("Node added with value=%d address=%d",temp->info,temp);
    }
}
void delete_at_begin()
{
    struct node *t;
    if(START==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        t=START;
        START=START->link;
        printf("Node is deleted with value=%d and address=%d",t->info,t);
        free(t);
    }
}
void delete_at_end()
{
    struct node *t,*p;
    if(START==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            p=t;
            t=t->link;
        }
        p->link=NULL;
        printf("Node is deleted with value=%d and address=%d",t->info,t);
        free(t);
    }
}
void view_list()
{
    struct node *t;
    int i=1;
    if(START==NULL)
    {
        printf("List is empty");
    }
    else
    {
        t=START;
        while(t!=NULL)
        {
            printf("Node %d value=%d and address=%d\n",i,t->info,t);
            t=t->link;
            i++;
        }
    }
}
int main()
{
  int choice;
  while(1)
  {
      system("cls");
      printf("\n1. Add Node to the list at End");
      printf("\n2. Add Node at Beginning");
      printf("\n3. Deletion from end");
      printf("\n4. Deletion from beginning");
      printf("\n5. View list");
      printf("\n6. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	case 1:
	      insert_at_end();
	      break;
	case 2:
	      insert_at_begin();
	      break;
	case 3:
	      delete_at_end();
	      break;
    case 4:
          delete_at_begin();
          break;
    case 5:
          view_list();
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
