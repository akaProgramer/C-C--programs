#include <stdio.h>
#include <malloc.h>

   struct node
{
    int data;
    struct node *link;
};
typedef struct node Node;
Node *start;
void create_empty_list(Node *start)
{
    start=NULL;
}
void traverse()
{
    Node *ptr;
    if(start==NULL)
    {
        printf("List is Empty... \n");
    }
    else
    {
        ptr=start;
        while (ptr!=NULL)
         {
            printf("%d \n",ptr->data);
            ptr=ptr->link;
         }
    }
}
void insert_at_beginning(int item)
{
    Node *ptr;
    ptr=(Node *) malloc(sizeof(Node));
    ptr->data=item;
    if(start==NULL)
    {
        ptr=NULL;
    }
    else
    {
        ptr->link=start;
    }
}
void insert_at_end(int item)
{
    Node *ptr,*loc;
    ptr=(Node *) malloc(sizeof(Node));
    ptr->data=item;
    if(start==NULL)
    {
        start=ptr;;
    }
    else
    {
        loc=start;
        while (loc->link!=NULL)
        {
            loc=loc->link;
        }
        loc->link=ptr;
    }
}
void insert_at_specified_position(int item,int loc)
{
    Node *ptr,*temp;
    int c;
    for(c=0,temp=start;c<loc;c++)
    {
        temp=temp->link;
        if (temp==NULL)
        {
            printf("Node in the list at less than one \n");
        }
    }
    ptr=(Node *) malloc(sizeof(Node));
    ptr->data=item;
    ptr->link=temp->link;
    temp->link=ptr;
}
int main()
{
    int choice,item,loc;
    create_empty_list(start);
    do
    {
        printf(" Inserting Element through various methods \n");
        printf("............................................ \n");
        printf("1. Insert Element at Beginning \n");
        printf("2. Insert Element at End \n");
        printf("3. Insert Element at Specified Position \n");
        printf("4. Traverse the List in Order \n");
        printf("5. Exit \n");
        printf("Enter your Choice... \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the Item to be inserted... \n");
                    scanf("%d",&item);
                    insert_at_beginning(item);
                    break;
            case 2: printf("Enter the Item to be inserted... \n");
                    scanf("%d",&item);
                    insert_at_end(item);
                    break;
            case 3: printf("Enter the Item to be inserted... \n");
                    scanf("%d",&item);
                    printf("Enter the Position where you want to insert the Node... \n");
                    scanf("%d",&loc);
                    insert_at_specified_position(item,loc);
                    break;
            case 4: printf("Traverse the List... \n");
                    traverse();
                    break;
            case 5: exit(0);

            default: printf("Enter a Valid Choice");
        }
    }
    while(choice!=5);
    return 0;
}
