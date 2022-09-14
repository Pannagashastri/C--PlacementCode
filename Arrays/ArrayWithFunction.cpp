#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"the array is "<<arr[i]<<endl;
    }
}

int main(){
int fourth[14]={1,34,22,45 };
//printArray(fourth,15);

    // int fourth1=sizeof(fourth)/sizeof(int);

//     cout<<"size of fourth "<<fourth1<<endl;

        char ch[15]={'p','a','n','n','a','g','a'};
        for(int i=0;i<7;i++){
                cout<<ch[i];
        }

    return 0;
}