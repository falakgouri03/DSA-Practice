#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector <int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true)
        {
            break;
        }
    }
}
void insertion_sort(vector <int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
void selection_sort(vector <int>& arr){
    int n=arr.size();
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
void display(vector <int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> v={1,2,3,4,5,6};
    display(v);
    int n;
    cout<<"Enter 1 for Bubble Sort, 2 for Insertion Sort and 3 for Selection Sort:";
    cin>>n;
     switch(n){
        case 1:
        bubble_sort(v);
        display(v);
        break;
        case 2:
        insertion_sort(v);
        display(v);
        break;
        case 3:
        selection_sort(v);
        display(v);
        break;
        default:
        cout<<"Invalid Input"<<endl;
        break;
    }


    return 0;

}