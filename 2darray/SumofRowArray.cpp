#include<iostream>
using namespace std;

void printArray(int arr[][3],int row,int col){
cout<<"printing the sum"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){

            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }



}







int main()
{
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){

            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    printArray(arr,3,3);

 return 0;
}   