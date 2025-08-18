#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
class single_ll
{
    public:
    Node*head=NULL;
     void insert_at_end(int d)
     {
        Node*newnode=new Node(d);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
             Node*temp=head;
             while(temp->next!=NULL)
             {
                temp=temp->next;
             }
             temp->next=newnode;
        }
        
     }
     void delete_at_end()
     {
        if(head==NULL||head->next==NULL)
        {
            head=NULL;
        }
        else{
            Node*temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
        }
     }
     void push(int val)
     {
        insert_at_end(val);
     }
     void pop()
     {
        delete_at_end();
     }
     void display()
     {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
     }
};
int main()
{
    single_ll obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.display();
    obj.pop();
    obj.display();
    return 0;
}

