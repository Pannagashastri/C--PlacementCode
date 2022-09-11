#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        
        int j=i; 
        while (j<=2*i-1)//to print i value so we
        {
           cout<<j;
           
           j=j+1; 
        }
       cout<<endl;
       i=i+1; 
    }
}