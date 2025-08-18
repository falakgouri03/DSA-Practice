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
    void delete_at_beg()
    {
        if(head==NULL)
        {
            cout<<"linked list is empty";
        }
        else
        {
            head=head->next;
        }
    }
    void enqueue(int val)
    {
        insert_at_end(val);
    }
    void dequeue()
    {
        delete_at_beg();
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
    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.enqueue(40);
    obj.display();
    obj.dequeue();
    obj.display();
    return 0;
}