#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int a=0;    
    
        while(x!=0){
            int digit=x%10;
            a=(a*10)+digit;
            x=x/10;
            cout<<a;
    }
    
    
}