#include<iostream>
using namespace std;

char lower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}


bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }else{
            s++;
            e--;
        }

    }
    return 1;
}


int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;

    }
    return count;
}

int main(){
char name[20];
cout<<"enter string";
cin>>name;
int len=getLength(name);


cout<<"Palindrome or not: "<<checkPalindrome(name,len)<<endl;

cout<<"the char is: "<<lower('b')<<endl;
cout<<"the char is:"<<lower('C')<<endl;
    return 0;
}
