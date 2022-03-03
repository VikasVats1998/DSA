// Max till i
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int temp=0;
    for(int i=0;i<n;i++){
        if(temp<array[i]){
            temp=array[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}