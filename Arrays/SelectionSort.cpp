#include<iostream>
using namespace std;

int SelectionSort(int arr[],int n){
    int minimum;
    for(int i=0;i<n-1;i++){
         minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        swap(arr[minimum],arr[i]);
    }
    return minimum;

}


int main(){
    int even[6]={2,44,32,45,66,88};

    cout<<"the sorted array is "<<endl;
    cout<<SelectionSort(even,6)<<endl;
    

}