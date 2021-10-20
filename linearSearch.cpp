#include<iostream>
using namespace std;

int linearSearch(int array[], int n, int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the Element you want to search"<<endl;
    cin>>key;

    cout<<linearSearch(array,n,key);
    
}