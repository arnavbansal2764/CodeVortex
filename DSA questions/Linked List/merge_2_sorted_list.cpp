// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

//Amazon Flipkart Microsoft Oracle Samsung 

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
    if (head == NULL)
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
node* mergelists(node* &head1, node* &head2)
{
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* dummynode= new node(-1);
    node* ptr3=dummynode;

    while (ptr1!=NULL &&ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    while (ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;        
    }
    
    while (ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr1->next;
        ptr3=ptr3->next;
    }
    return dummynode->next;    
}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,7);
    display(head);
    node* head2 = NULL;
    insertAtTail(head2,2);
    insertAtTail(head2,3);
    insertAtTail(head2,6);
    display(head2);
    node* newhead = mergelists(head,head2);
    display(newhead);
}
