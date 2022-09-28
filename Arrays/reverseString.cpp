#include<iostream>
using namespace std;

string reverseArray(char arr[],int n){
    int s=0;
    int e=n-1;
    string gg;
    while(s<e){
        gg=swap(arr[s++],arr[e--]);

    }
    return gg;
    
}



int main(){

    char name[10]={'p','a','n'};
    string reverse;
   reverse=reverseArray(name,10);
   cout<<reverse<<endl;
    return 0;
}