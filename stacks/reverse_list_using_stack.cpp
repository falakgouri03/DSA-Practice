#include<iostream>
using namespace std;
int s[5];
int maxsize=5;
int top=-1;
int push(int x)
{
    if(top==maxsize-1)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        top=top+1;
        s[top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
        return-1;
    }
    else
    {
         int val=s[top];
         top--;
         return val;
    }
}
int peek()
{
    return s[top];
}
bool isempty()
{
    return(top<0);
}
int main()
{
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        push(arr[i]);
    }
    cout<<"reversed list"<<endl;
    while(!isempty())
    {
        cout<<pop()<<" ";
    }
    cout<<endl;
    return 0;

}
