#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
    return b;

    if(b==0)
    return a;
    
    while(a!=b){
        if(a>b){
            return a=a-b;
        }else{
            return b=b-a;
        }
    }
    return a;
}




int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"the gcd"<<gcd(a,b)<<endl;
 return 0;
}