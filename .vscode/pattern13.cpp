#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch='A';
    int i=1;
    while (i<=n)
    {
       int j=1;
       while (j<=i)
       {
        char cc='A'+i-j;
        cout<<cc;
        //ch--;
        j++;    
       }
       cout<<endl;
       i++;
        
    }
    
}