//Given a pointer to a node to be deleted, delete the node. Note that we don’t have a pointer to the head node.
// Solution : just copy the next node's data to the given node and delete the next node
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
void deletenode(node* &ptr)
{
    if (ptr->next==NULL)
    {
        return;
    }
    
    node* todelete = ptr->next;
    todelete->data = ptr->data;
    ptr->next=ptr->next->next;
    delete todelete;
}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    node* temp = head;
    while (temp->next->data!=2)
    {
        temp=temp->next;
    }
    deletenode(temp);
    display(head);
    return 0;
}
