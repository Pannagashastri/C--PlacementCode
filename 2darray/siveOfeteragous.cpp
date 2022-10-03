#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int isPrime(int n){
    vector<bool> prime(n+1,true);
    int count=0;
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
        }
        for(int j=2*i;j<n;j=i+j){
            prime[j]=0;
        }
    }
    return count++;
}


int main()
{
    int n;
    cin>>n;
    cout<<"the number of prime occurance are: "<<isPrime(n)<<endl;
 return 0;
}