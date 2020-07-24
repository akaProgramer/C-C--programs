#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define size 100
int top=-1;
char s[size];
char pop()
{
    char item;
    item=s[top];
    top--;
    return (item);
}
int precedence(char symbol)
{
    if(symbol=='^')
    {
        return 3;
    }
    else if(symbol=='*'||symbol=='/')
    {
        return 2;
    }
    else if(symbol=='-'||symbol=='+')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int is_operator(char symbol)
{
    if(symbol=='^'||symbol=='/'||symbol=='*'||symbol=='+'||symbol=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char item)
{
    if(top>=size-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        s[top]=item;
    }
}
int main()
{
    char infix[size],post[size],item,temp;
    int i=0,j=0;
    printf("Enter a arithmetic infix expression: ");
    gets(infix);
    while(infix[i]!='\0')
    {
        item=infix[i];
        if(item=='(')
        {
            push(item);
        }
        else if(item>='A' && item<='Z' || item>='a' && item<='z')
        {
            post[j]=item;
            j++;
        }
        else if(is_operator(item)==1)
        {
            temp=pop();
            while(is_operator(temp)==1 && precedence(temp)>=precedence(item))
            {
                post[j]=temp;
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
                post[j]=temp;
                j++;
                temp=pop();
            }
        }
        else
        {
            printf("Invalid expression");
            getch();
            exit(0);
        }
        i++;
    }
    while(top>-1)
    {
        post[j]=pop();
        j++;
    }
    post[j]='\0';
    printf("\nArithmetic expression in Postfix is: ");
    puts(post);
    getch();
    return 0;
}
