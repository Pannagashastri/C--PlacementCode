#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        int space=n-i;
        while (space)   
        {
            cout<<" ";
            space--;
        }
         //1s triable
        while (j<=i)
        {
             //char ch='A'+n-i;
            
          
            cout<<j;
             j++;
        }
        //2nd triangle
    int start=i-1;
    while (start)
    {
        cout<<start;
        start--;
    }
    
        cout<<endl;
        i++;
    }
}