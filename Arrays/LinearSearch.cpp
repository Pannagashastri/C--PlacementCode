#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
        for(int i=0;i<size;i++){
            if(arr[i]==key){
                //cout<<" found"<<endl;
                return 1;
            }
        }
        return 0;
}


int main(){

    int arr[10]={2,3,4,-3,44,-55,8,9,89};

    cout<<"enter the key to found"<<endl;
    int key;
    cin>>key;
   int found=search(arr,10,key);
   if(found){
    cout<<"key found"<<found<<" and the key is "<<key<<endl;

   }else{
    cout<<"key not found"<<endl;
   }
    return 0;
}