#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void SortArray101(int arr[],int n){
    int step=1;
    int left=0,right=n-1;
    while(left<right){
        //cout<<"step 0"<<step++<<endl;
        //printArray(arr,n);
        //cout<<endl;
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }//if(arr[left]==1 && arr[right==0] && left<right){

        if(arr[left]==1 && arr[right]==0 && left<right ){

        swap(arr[left],arr[right]);
        left++;
        right--;
        }
       // }
}


}


int main(){
     
int arr[10]={1,0,1,0,1,0,1,0};


    SortArray101(arr,10);
     printArray(arr,10);
    

    return 0;
}