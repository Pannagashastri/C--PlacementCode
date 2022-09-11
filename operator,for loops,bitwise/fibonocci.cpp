#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int a=0;
    int b=1;
cout<<a<<endl;
cout<<b<<endl;

    for (int i = 0; i < n; i++)
    {
       sum=a+b;
        a=b;
        b=sum;

        cout<<sum<<endl;
    }
    
}