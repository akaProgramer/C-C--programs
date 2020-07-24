/*Binary Tree*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct btnode
{
  int data;
  struct btnode *left;
  struct btnode *right;
};
struct btnode *root=NULL;
struct btnode* createnode()
{
  struct btnode *n;
  n=(struct btnode *)malloc(sizeof(struct btnode));
  printf("Enter an value: ");
  scanf("%d",&n->data);
  n->left=NULL;
  n->right=NULL;
  return n;
}
void insertnode()
{
  struct btnode *t,*pt;
  t=createnode();
  if(root==NULL)
  {
    root=t;
    printf("Node is added at address=%d value=%d",t,t->data);
  }
  else
  {
    pt=root;
    while(pt!=NULL)
    {
      if(pt->data>t->data)
      {
	if(pt->left==NULL)
	{
	  pt->left=t;
	  printf("Node is added at address=%d value=%d",t,t->data);
	  pt=pt->left;
	}
	pt=pt->left;
      }
      else if(pt->data<t->data)
      {
	if(pt->right==NULL)
	{
	  pt->right=t;
	  printf("Node is added at address=%d value=%d",t,t->data);
	  pt=pt->right;
	}
	pt=pt->right;
      }
      else if(pt->data==t->data)
      {
          printf("Enter a unique item");
          break;
      }
    }
  }
}
void preOrder(struct btnode *root)
{
  if(root)
  {
    printf("%d\n",root->data);
    preOrder(root->left);
    preOrder(root->right);
  }
}
void inOrder(struct btnode *root)
{
  if(root)
  {
    inOrder(root->left);
    printf("%d\n",root->data);
    inOrder(root->right);
  }
}
void postOrder(struct btnode *root)
{
  if(root)
  {
    postOrder(root->left);
    postOrder(root->right);
    printf("%d\n",root->data);
  }
}

int main()
{
  int ch;
  while(1)
  {
    system("cls");
    printf("\n1. Insert a node");
    printf("\n2. Pre Order traversal");
    printf("\n3. In order traversal");
    printf("\n4. Postorder Traversal");
    printf("\n5. Exit ");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	    insertnode();
	    break;
      case 2:
	    preOrder(root);
	    break;
      case 3:
	    inOrder(root);
	    break;
      case 4:
        postOrder(root);
	    break;
      case 5:
	    exit(0);
      default:
	     printf("Invalid choice");
    }
    getch();
  }
  return 0;
}




