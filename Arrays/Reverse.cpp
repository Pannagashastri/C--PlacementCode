#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int high=0;
    int low=n-1;
    while(high<=low){
        swap(arr[high],arr[low]);
        high++;
        low--;
    }
}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[6]={3,44,55,22,4,34};
    int brr[5]={5,4,3,2,1};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);


    return 0;
}