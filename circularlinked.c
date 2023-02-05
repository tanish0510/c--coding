#include<stdio.h>
#include<stdlib.h>
                        //MAKING STRUCTURE//
struct node
{
    int data;
    struct node*next;
}*head,*tail;
                        //CREATING THE LINKED LIST//
void create()

{
    struct node *newnode;
    head=0;
    int choice=1;
    while(choice)
    {

    
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=tail=newnode;
        tail->next=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
        tail->next=head;           
    }
    printf("do you want to continue(0/1)?");
    scanf("%d",&choice);
}

}
                        //DISPLAYING THE CIRCULAR LINKED LIST//
void display()
{
    struct node*tail;
    tail=head;
    printf("The contents of circular linked list are:\n");
    while(tail->next==head)
    {
         printf("%d\t\t",tail->data);
        tail=tail->next;
    }
    
}
                        //INSERTING AT BEGINNNING//
void insertatbeg()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if (tail==0)
    {
        newnode->next=tail->next;
        tail->next=newnode;
    }
else
{
    newnode->next=tail->next;
    tail->next=newnode;
}
}
                    //INSERTING AT END//
void insertatend()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail->next==0)

    {
        newnode->next=tail;
        tail->next=newnode->next;

    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
}
                        //INSERT AT SPECIOFIC POSITION//
void insert_at_pos()
{
    int i=1,pos;
    if(pos==1)
    {
        insertatbeg();
    }
    else
    {
        struct node *newnode,*temp;
        head=0;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        while(i<pos)
        {
            temp=temp->next;
            i++; 
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
                        //DELETE FROM BEGINNNING//
void delfrombeg()
{
    struct node *temp;
    temp=tail->next;
    if(tail==0)
    {
        tail=0;
        free(temp);
    }
    else
    {
        tail->next=temp->next;
        free(temp);
    }
}
                        //DELETE FROM END//
void delfromend()
{
    struct node *current,*prev;
    current=tail->next;
    if(current->next==current)
    {
        tail=0;
        free(current);
    }
    else
    {
        while(current->next!=tail->next)
        {
            prev=current;
            current=current->next;

        }
        prev->next=tail->next;
        tail=prev;
        free(current);
    }
}
                    //DELETE FROM A SPECIFIC POPSITION//
void del_from_pos()
{
    struct node *current,*nextnode;
    int i=1,pos;
    current=tail->next;
    printf("enter poisition:\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        delfrombeg();
    }
    else
    {
        while(i<pos-1)
        {
            current=current->next;
            i++;
        }
        nextnode=current->next;
        current->next=nextnode->next;
        free(nextnode);
    }
}
                    //REVERSE THE CIRCULAR LINKED LIS//
void reversecll()
{
    struct node *prev,*current,*nextnode;
    current=tail->next;
    nextnode=current->next;
    if(tail==0)
    {
        printf("list is empty");


    }
    else
    {
        while(current!=tail)
    {
        prev=current;
        current=nextnode;
        nextnode=current->next;
        current->next=prev;

    }
    nextnode->next=tail;
    tail=nextnode;
    }
}
int main()
{
    create();
    insertatbeg();
    insertatend();
    insert_at_pos();
    delfrombeg();
    delfromend();
    del_from_pos();
    reversecll();
    display();
    return 0;
}
