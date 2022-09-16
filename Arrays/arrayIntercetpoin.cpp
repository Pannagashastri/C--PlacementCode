#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    int element;
    for(int i=0;i<n;i++){
         element=arr[i];
        cout<<element;
    }
}


int main(){
int mm[10]={1,3,4,4,5,5};
printArray(mm,5);
    return 0;
}