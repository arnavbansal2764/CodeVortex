//There is a cycle in a linked list if there is some node in the list that can be reached again by
// continuously following the next pointer. 
//Internally, pos is used to denote the index of the node that tail's next pointer is connected to. 
//Note that pos is not passed as a parameter.
//Amazon DEShaw Mahindra Qualcomm Adobe

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
void makecycle(node* & head, int val)
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
    temp->next=temp2;
}
bool detectcycle(node* &head)
{
    //floyd's algorithm to detect cycle in a linked list
    
    node* slow = head;
    node* fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if (fast==slow)
        {
            return true;
        }
        
    }
    return false;
}

int main()
{
    node* head = NULL;
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,0);
    insertAtTail(head,4);
    display(head);
    makecycle(head,2);
    cout<<detectcycle(head)<<endl;
    return 0;
}


