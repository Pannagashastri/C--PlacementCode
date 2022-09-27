#include<iostream>
#include<vector>
using namespace std;

void Merge(int nums1[],int n,int nums2[],int m){
int i=0,j=0,k=0;
int nums3[8];
while(i<n && j<m){
    if(nums1[i]<=nums2[j]){
       nums1[k]=nums1[i] ;
       k++;
       i++;

    }else{
        nums1[k]=nums2[j];
        k++;
        j++;
    }


}
while(i<n){
    nums1[k++]=nums1[i++];

}
while(j<m){
    nums1[k++]=nums2[j++];
}


}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
int arr1[3]={1,2,3};
int arr2[3]={3,4,6};

Merge(arr1,3,arr2,3);
printArray(arr1,6);



}