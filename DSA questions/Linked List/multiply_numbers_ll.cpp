//Multiply two numbers represented by Linked Lists
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
void inserAtTail(node* &head, int val)
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

long long multiply(node* &list_one, node* &list_two)
{
    long long n = 1000000007;
    long long first_num = 0, second_num=0;
    while (list_one || list_two)
    {
        if(list_one){
            first_num = ((first_num)*10)%n + list_one->data;
            list_one = list_one->next;
        }
        
        if(list_two)
        {
            second_num = ((second_num)*10)%n + list_two->data;
            list_two = list_two->next;
        }
        
    }
    return ((first_num%n)*(second_num%n))%n;
}
    

int main()
{
    node* head = NULL;
    inserAtTail(head,2);
    inserAtTail(head,3);
    inserAtTail(head,4);
    inserAtTail(head,5);
    display(head);
    node* head2 = NULL;
    inserAtTail(head2,3);
    inserAtTail(head2,4);
    inserAtTail(head2,5);
    display(head2);
    cout<<multiply(head,head2);
    return 0;
}
