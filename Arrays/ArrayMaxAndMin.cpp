#include<iostream>
#include<climits>
using namespace std;

int getMax(int ne[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(ne[i]>max){
            max=ne[i];
        }
    }
    return max;
}
int getMin(int arr[],int n){
    int min1=INT_MAX;
    for(int i=0;i<n;i++){
        min1=min(min1,arr[i]);
        // if(arr[i]<min){
        //     min=arr[i];
        // }
    }
    return min1;
}

int main(){
    int size;
    cin>>size;
    int num[100];  
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"the maximum value is "<<getMax(num,size)<<endl;
    cout<<"The minimum value is"<<getMin(num,size)<<endl;

    return 0;

}