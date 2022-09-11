#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        int space=n-i+1;
        while (space)   
        {
            cout<<"*";
            space--;
        }
         
        while (j<=i)
        {
             //char ch='A'+n-i;
            
          
            cout<<" ";
             j++;
        }
        cout<<endl;
        i++;
    }
}