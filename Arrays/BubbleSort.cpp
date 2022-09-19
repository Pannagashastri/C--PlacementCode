#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int>&arr, int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
        
            }
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }
}

int main(){
    int even[6]={1,33,3,22,10,12};

    BubbleSort(even[6],6);
    // for(int i=0;i<n;i++){

    //     //process to n-1
    //     for(int j=0;j<n-i;j++){
    //         //process element till n-i th index 
    //             if(arr[j]>arr[j+1]){
    //                 swap(arr[j],arr[j+1]);
    //             }
    //     }
    // }

    // return 0;
}