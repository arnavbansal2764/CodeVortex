//Given the head of a singly linked list, reverse the list, and return the reversed list.
// Sprinklr

#include <iostream>
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
void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display (node* &head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse1 (node* &head)
{
    //iterative method
    node* prv = NULL;
    node* curr = head;
    node* nxt;

    while (curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prv;
        prv=curr;
        curr=nxt;
    }
    return prv;
}
node* reverse2 (node* &head)
{
    //recursive method
    if (head==NULL || head->next == NULL)
    {
        return head;
    }
    
    node* newhead = reverse2(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    // node* newhead = reverse1(head);
    // display(newhead);
    node* newhead2 = reverse2(head);
    display(newhead2);
    return 0;
}