#include<iostream>
using namespace std;

int Unique(int *arr,int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int arr[5]={1,3,4,3,4};

   cout<<"the unique element is"<<Unique(arr,5)<<endl;

    return 0;
}