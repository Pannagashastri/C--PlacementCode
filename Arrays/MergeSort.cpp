#include<iostream>
using namespace std;

void mergeArray(int arr[],int size1,int arr2[],int size3 ,int arr3[],int o){
int i=0;
int j=0;
int k=0;
while(i<size1 && j<size3){
    if(arr[i]<arr2[j]){
       arr3[k] =arr[i];
       k++;
       i++;
    }else{
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

//copy first array k element    
while(i<size1){
    arr3[k++]=arr[i++];

}
//copy second array k elemtne 
while(j<size3){
    arr3[k++]=arr2[j++];
    
}
//   int l=0;
//     int sizeofArray=0;
//     while(l<sizeofArray){
//         if(sizeofArray%2!=0){
//             cout<< sizeofArray/2<<" "<<" "<<endl;
//             cout<<endl;
//         }else{
//             cout<<(arr3[sizeofArray-1]/2 + arr3[sizeofArray/2])<<" "<<endl;

//         }
//     }
   

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

int arr1[2]={1,2};
int arr2[3]={3,4};

int arr3[8]={0};

mergeArray(arr1,5,arr2,3,arr3,8);

printArray(arr3,8);


    return 0;
}