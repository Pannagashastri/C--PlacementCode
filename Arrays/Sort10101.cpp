#include<iostream>
using namespace std;

void SortArray101(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}


int main(){
     
int arr[10]={1,0,1,0,1,0,1,0};


    SortArray101(arr,10);
     printArray(arr,10);
    

    return 0;
}