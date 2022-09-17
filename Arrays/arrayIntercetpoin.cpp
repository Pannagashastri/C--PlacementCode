#include<iostream>
using namespace std;

// void printArray(int arr[],int n){
//     int element;
//     for(int i=0;i<n;i++){
//          element=arr[i];
//         cout<<element;
//     }
// }

vector<int> findInteraction(vector<int>  &arr1,int n,vector<int> &arr2,int m){
    int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        
        if(arr1[i]== arr2[j]){
           ans.push_back(arr[i]);

            i++;
            j++;    
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    return ans;
}


int main(){
int mm[10]={1,3,4,4,5,5};
printArray(mm,5);
    return 0;
}