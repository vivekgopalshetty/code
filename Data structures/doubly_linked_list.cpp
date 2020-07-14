#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head=NULL;
struct node* tail=NULL;

node* create_node(int x)
{
    struct node* new_node = (node*) malloc(sizeof(struct node));
    new_node->data=x;
    new_node->prev=NULL;
    new_node->next=NULL;

    return new_node;
}


void add_node(int x)
{
    struct node* temp=create_node(x);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}


void insert_at(int x,int loc)
{
    struct node* temp=create_node(x);
    if(head==NULL && tail==NULL)
    {
        cout <<"Your linked list is empty.\nAdding your given input to create a linked list\n";
        head=temp;
        tail=temp;
    }
    else if(loc==0)
    {
        temp->next=head;
        head=temp;
    }
    else if(loc>0)
    {
        struct node* dup=head;
        loc=loc-1;
        while(loc>0 && dup->next!=NULL)
        {
            loc=loc-1;
            dup=dup->next;
        }

        if(loc!=0)
        {
            cout<<"inserted at given location: end of list\n";
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        else
        {
            cout<<"inserted at given location:\n";
            temp->prev=dup;
            temp->next=dup->next;
            dup->next->prev=temp;
            dup->next=temp;
        }

    }
}


void delete_at(int loc)
{

    if(head==NULL && tail==NULL)
    {
        cout <<"Your linked list is empty\n";
    }
    else if(loc==0)
    {
        head=head->next;
        head->prev=NULL;
    }
    else if(loc>0)
     {
        struct node* dup=head;
        while(loc>0 && dup->next->next!=NULL)
        {
            loc=loc-1;
            dup=dup->next;
        }

         if(loc!=0)
        {
            cout<<"deleted at given end location:\n";
            struct node* temp=dup;
            temp=temp->next;
            temp->prev=NULL;
            dup->next=NULL;
            tail=dup;
        }
        else
        {
            cout<<"deleted at given location:\n";
            struct node* temp=dup;
            temp=dup->next->next;
            temp->prev=dup;
            dup->next=dup->next->next;

        }
     }

}


void front_traverse()
{
    struct node* temp=head;
    while(temp->next!=NULL)
    {
        cout << temp->data<<" ";
        temp=temp->next;
    }

    cout << temp->data<<endl;
}


void back_traverse()
{
    struct node* temp=tail;
    while(temp->prev!=NULL)
    {
        cout << temp->data<<" ";
        temp=temp->prev;
    }

   cout << temp->data<<endl;
}


int main()
{
    add_node(5);
    add_node(6);
    add_node(4);
    add_node(10);
    add_node(12);
    front_traverse();
    back_traverse();
    insert_at(8,2);
    front_traverse();
    back_traverse();
    insert_at(123,10);
    front_traverse();
    back_traverse();
    delete_at(2);
    front_traverse();
    back_traverse();
    delete_at(3);
    front_traverse();
    back_traverse();
    return 0;
}

