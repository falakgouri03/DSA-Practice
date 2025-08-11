#include<iostream>
using namespace std;

void polyadd(int p1[],int p2[],int maxdegree){
    for(int i=0;i<=maxdegree;i++){
        p1[i]=p1[i]+p2[i];
    }
}
void display(int p1[],int maxdegree)
{
    for(int i=maxdegree;i>=0;i--)
    {
        cout<<p1[i]<<"x^"<<i<<"+";
    }
    cout<<"\b"<<endl;
}
int main()
{
    int p1[100];
    int p2[100];
    int maxdegree;
    cout<<"enter maxdegree"<<endl;
    cin>>maxdegree;
    for(int i=0;i<=maxdegree;i++)
    {
        cin>>p1[i];
    }
    for(int i=0;i<=maxdegree;i++)
    {
        cin>>p2[i];
    }
    polyadd(p1[],p2[],maxdegree);
    display(p1[],maxdegree);
    
    
    return 0;
}