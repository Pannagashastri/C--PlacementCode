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
        if(lower(a[s])!=lower(a[e])){
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
//homework codd

// omework code given at 42:39

// #include<bits/stdc++.h>

// using namespace std;



// string reverse(string x){

//     int i = 0;

//     int j = x.length() - 1;

//     while(i <= j){

//         swap(x[i], x[j]);

//         i++;

//         j--;

//     }

//     x.push_back(' ');

//     return x;

// }



// int main(){

//     string s, x;

//     vector<string> v;

//     getline(cin, s);

//     int i = 0;

//     int j = s.length() - 1;

//     while(s[i] != '\0'){

//         if(s[i] != ' '){

//             x.push_back(s[i]);

//         }

//         else if(s[i] == ' '){

//             v.push_back(reverse(x));

//             x.clear();

//         }

//         i++;

//     }

//     v.push_back(reverse(x));

//     for(int i = 0; i < v.size(); i++){

//         cout<<v[i];

//     }

//     return 0;

// }