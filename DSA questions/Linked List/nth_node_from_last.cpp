#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
int number_of_nodes(node* &head)
{
    int counter = 0;
    node* temp= head;
    while(temp!=NULL)
    {
        counter++;
        temp=temp->next;
    }
    return counter;
}
void display(node* &head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void remove_nth_fromlast(node* &head, int n)
{
    int count = (number_of_nodes(head)-n);
    node* temp = head;
    int i = 0;
    while (temp!=NULL && i!=(number_of_nodes(head)-n-1))
    {
        i++;
        temp=temp->next;
    }
    
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main()
{
    node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    display(head);
    // cout<<number_of_nodes(head);
    remove_nth_fromlast(head,2);
    display(head);

    return 0;
}
