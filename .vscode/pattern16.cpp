#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
      char ch='A'+n-i;
        while (j<=i)
        {
             //char ch='A'+n-i;
             cout<<ch;
            ch++;
            cout<<ch<<" "; 
             j++;
        }
        cout<<endl;
        i++;
    }
}