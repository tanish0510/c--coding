#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;

}
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("Stack is empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
    }

void peek()
{
    if(top==0)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\nThe top element is:%d\n",top->data);

    }
}

void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("underflow");

    }
    else
    {
        printf("\nthe popped element is: %d\n",top->data);
        top=top->link;
        free(temp);
    }

}
void main()
{
    push(4);
    push(7);
    push(9);
    push(3);
    display();
    peek();
    pop();
    peek();
    display();
}