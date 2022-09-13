#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int a=0;    
    
        while(x!=0){
            int digit=x%10;
            if((a>INT32_MAX/10)||(a<INT32_MAX/10)){
                return 0;
            }
            a=(a*10)+digit;
            x=x/10;
            cout<<a;
    }
    
    
}