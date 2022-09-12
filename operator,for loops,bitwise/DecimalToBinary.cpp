#include<math.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int answer=0;
    //int anwer2=0;
    while (n!=0)
    {
        int bit=n&1;
         answer=(bit*pow(10,i))+answer;//for decimal to binary
         //to reverse the number:(answer*10)+digit
        // int reverse;
         //int m=n%10;
         //reverse=(m*pow(10,i))+anwer2;
        // cout<<reverse<<"reveser of string"<<endl;
        n=n>>1;
        i++;
    }
    cout<<"the number decimal to binary is"<<answer<<endl;

}