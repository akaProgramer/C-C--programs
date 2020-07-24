#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define SIZE 50
int top=-1;
char s[SIZE];
void push(char item)
{
    top++;
    s[top]=item;
}
char pop()
{
    char item;
    item=s[top];
    top--;
    return item;
}
int is_operator(char symbol)
{
    if(symbol=='*' || symbol=='-' || symbol=='/' || symbol=='^' || symbol=='+')
        return 1;
    else
        return 0;
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
int main()
{
    char infix[SIZE],post[SIZE],item,temp;
    int i=0,j=0;
    printf("Enter infix exp: ");
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
            printf("Expression is not valid");
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
    printf("\nPostfix= ");
    puts(post);
    getch();
    return 0;
}
