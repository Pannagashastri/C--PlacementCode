//Algo
//for(index->0 to n-1)
//if(i+1<size)
//swap(arr[i],arr[i+1]);
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
}
void swapAlternate(int arr[],int n){
for(int i=0;i<n;i+=2){
    if(i+1<n){
        swap(arr[i],arr[i+1]);
        //how swap works
        //temp=a[1]
        //a[1]=a[0]
        //a[0]=temp
    }
}
}


int main(){

    int even[8]={5,2,4,5,22,66,88,69};
    int odd[5]={1,2,3,5,6};

    swapAlternate( even,8);
    swapAlternate(odd,5);

    printArray(even,8);
    printArray(odd,5);
return 0;
}