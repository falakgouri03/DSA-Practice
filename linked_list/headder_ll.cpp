#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class Headerll
{
    public:
    Node*head;
    Node*header;
    Headerll(int dumy)
    {
        header=new Node(dumy);
        head=header;
    }
    void insert_at_beg(int d)
    {
        Node*newnode=new Node(d);
        newnode->next=header->next;
        header->next=newnode;
    }
    void insert_at_end(int d)
    {
        Node*newnode=new Node(d);
        Node*temp=header;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        
    }
    void delete_at_beg()
    {
        if(header->next==NULL)
        {
            cout<<"ll is empty"<<endl;
            return;
        }
        else
        {
              header->next=header->next->next;
        }
    }
    void delete_at_end()
    {
        if(header->next==NULL)
        {
            cout<<"ll is empty"<<endl;
            return;
        }
        else if(header->next->next==NULL)
        {
            header->next=NULL;
        }
        else{
        Node*temp=header;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        }
    }
    void display()
    {
        Node*temp=header->next;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Headerll obj(-1);
    obj.insert_at_beg(10);
    obj.insert_at_beg(20);
    obj.insert_at_end(30);
    obj.insert_at_end(40);
    obj.display();
    obj.delete_at_beg();
    obj.display();
    obj.delete_at_end();
    obj.display();
    return 0;
}