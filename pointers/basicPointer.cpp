#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int abc=4;
    cout<<"the adress of "<<&abc<<endl;
  
      //  int cba=&abc;    
    int *ptr=&abc;
    cout<<"vlaue s: "<<*ptr<<endl;
    cout<<"size of integer: "<<sizeof(abc)<<endl;
    cout<<"size fo ptr: "<<sizeof(ptr)<<endl;
    cout<<"size of *ptr: "<<sizeof(*ptr)<<endl;
    cout<<"this"<<*ptr<<endl;

    int i=5;
    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;


 return 0;
}