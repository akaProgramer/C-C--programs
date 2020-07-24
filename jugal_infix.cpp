#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

char Stack[SIZE];
int top=-1;

void push(char item)
{
    if(top>=SIZE-1)
    printf("\nStack Overflow. Push not possible.");
    else
    {
        top++;
        Stack[top]=item;
    }
}

char pop()
{
    char item;
    item=Stack[top];
    top--;
    return (item);
}

int is_operator(char symbol)
{
    if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
    return 1;
    else
    return 0;
}

int precendence(char symbol)
{
    if(symbol=='^')
    return 3;
    else if(symbol=='*'||symbol=='/')
    return 2;
    else if(symbol=='+'||symbol=='-')
    return 1;
    else
    return 0;
}

int main()
{
    char infix[SIZE],postfix[SIZE],item,temp;
    int i=0,j=0;
    printf("Enter an Arithmetic Infix Expression: ");
    fgets(infix,SIZE,stdin);
    while(infix[i]!='\0')
    {
        item=infix[i];
        if(item=='(')
        {
            push(item);
        }
        else if((item>='A' && item<='Z')||(item>='a'&&item<='z'))
        {
            postfix[j]=item;
            j++;
        }
        else if(is_operator(item)==1)
        {
            temp=pop();
            while(is_operator(temp)==1 && precendence(temp)>=precendence(item))
            {
                postfix[j]=temp;
                j++;
                temp=pop();
            }
            push(temp);
            push(item);
        }
        else if(item==')')
        {
            temp=pop();
            while(temp!='(')
            {
                postfix[j]=temp;
                j++;
                temp=pop();
            }
        }
        else
        {
            printf("\nInvalid Arithmetic Expression.");
            exit(0);
        }
        i++;
    }
    while(top>-1)
    {
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    printf("After Postfix Arthmetic Expression is: ");
    puts(postfix);
    return 0;
}
