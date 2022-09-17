#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;

        int mid=(start/2)+(end/2);
        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return 0;
}


int main(){

    int even[6]={1,2,33,44,55,66};
    int odd[5]={8,13,23,45,33};

        int index=binarySearch(even,6,66);
        int oddIndex=binarySearch(odd,5,8);
        cout<<"the index of 66 is"<<index<<endl;
        cout<<"the index of odd is "<<oddIndex<<endl;
}