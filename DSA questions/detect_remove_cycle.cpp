#include <bits/stdc++.h>
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

void removecycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while (fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    
}
bool detectcycle(node* &head)
{
    node* slow = head;
    node* fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if (slow==fast)
        {
            return true;
        }
        
    }
    return false;

}

void makecycle(node* &head, int val)
{
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* temp2=head;
    while (temp2->data!=val)
    {
        temp2=temp2->next;
    }
    temp->next = temp2;
}

void push(node* &head, int val)
{
    node* n = new node(val);
    if (head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;    
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
int main()
{
    node* head = NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);
    push(head,6);    
    makecycle(head,3);
    // removecycle(head);
    // display(head);
    cout<<detectcycle(head);
    return 0;
}
