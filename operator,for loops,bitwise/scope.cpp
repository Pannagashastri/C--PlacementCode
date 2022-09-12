#include<iostream>
using namespace std;

int main(){
    int a=3;
    cout<<a<<endl;

    if(true){
        int a=4;
        cout<<a<<endl;
    int b=1;    
    cout<<b<<endl; 
    }
    cout<<a<<endl;
    //cout<<b<<endl; //error
    if(1){
        int b;
        if(2){
            int b;
            if(1){
                cout<<b<<endl;
                int b;
                cout<<b<<endl;
            }
        }
    }
}