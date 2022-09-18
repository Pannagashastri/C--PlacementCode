#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<n;i++){

        //process to n-1
        for(int j=0;j<n-i;j++){
            //process element till n-i th index 
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
        }
    }

    return 0;
}