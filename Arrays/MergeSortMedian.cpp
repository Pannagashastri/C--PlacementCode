#include<iostream>
using namespace std;

int MergeArray(int arr1[],int n,int arr2[],int m,int arr3[],int o){
    
    int i=0;
    int j=0;
    int k=0;
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    //median;
  //  int l=0;
   // int sizeofArray=o;
    //while(l<sizeofArray){
     //   if(sizeofArray%2!=0){
       //     return sizeofArray/2;
      //  }else{
        //    return double(arr3[sizeofArray-1]/2 + arr3[sizeofArray/2]);

        //}
    //}
    

}
// void median(){

//     int l=0;
//     int sizeofArray=o;
//     while(l<sizeofArray){
//         if(sizeofArray%2!==0){
//             return sizeofArray/2;
//         }else{
//             return double(arr3[sizeofArray-1]/2+arr3[sizeofArray/2]);
//         }
//     }
// }
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}






int main(){
int num1[2]={1,2};
int num2[2]={3,4};
int num3[4]={0};
 
 printArray(num1,2,num2,2,num3,4);
printArray(num3,4);
cout<<time<<" "<<endl;

    
}