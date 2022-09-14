#include<iostream>
using namespace std;

int ArrayAdd(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}



int main(){
int num[100],n;
cout<<"Enter the limit to add the array"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cin>>num[i];
}


cout<<"the addition of array is "<<ArrayAdd(num,n)<<endl;
    return 0;
}