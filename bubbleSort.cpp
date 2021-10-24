#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int counter=1;
    while(counter<=n-1){
        for(int i=0;i<n-counter;i++){
            if(array[i]>array[i+1]){
                int temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            }
        }
        counter++;
    }
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}