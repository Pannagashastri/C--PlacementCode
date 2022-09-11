#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;
    cout<<"a&b"<<(a&b)<<endl;
    cout<<"a|b"<<(a|b)<<endl;
    cout<<"a^b"<<(a^b)<<endl;
    cout<<"~a"<<~a<<endl;
    //5<<2 = 5*2*2; 5<<1=5*2;
    //17>>1==8(17/2==8);17>>2==4(17/2*2==4
    //padding with zero
    //for negative padding will be compiler dependent

    cout<<(17>>1)<<endl;//divide
    cout<<(17>>2)<<endl;//divide
    cout<<(5<<2)<<endl;//multiply
    cout<<(5<<1)<<endl;//multiply
}   