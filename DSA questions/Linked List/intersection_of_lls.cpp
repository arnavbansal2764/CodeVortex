#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    bool visited;
    node(int val)
    {
        data=val;
        next=NULL;
        visited = false;
    }
};
void push(node* &head, int val)
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
int getIntersectnode(node* head1, node* head2){
    node* temp1 = head1;
    while(temp1 != NULL){
        temp1->visited = true;
        temp1 = temp1->next;
    }
     
    temp1 = head2;
    while(temp1 != NULL){
        if(temp1->visited)
            return temp1->data;
        else
            temp1->visited = true;
        temp1 = temp1->next;
    }
}
int main()
{
    node* head1 = new node(1);
     head1->next = new node(2);
     head1->next->next = new node(3);
     head1->next->next->next = new node(4);
     head1->next->next->next->next = new node(5);
     head1->next->next->next->next->next = new node(6);
     head1->next->next->next->next->next->next = new node(7);
     // list 2
     node* head2 = new node(10);
     head2->next = new node(9);
     head2->next->next = new node(8);
     head2->next->next->next = head1->next->next->next;
      
     cout<<"The node of intersection is : "<<getIntersectnode(head1, head2);
    return 0;
}
