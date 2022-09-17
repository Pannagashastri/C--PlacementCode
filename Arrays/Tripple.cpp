#include<iostream>
using namespace std;

int main(){


    vector<int> ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
            for(int k=j+1;i<n;k++){
                if(a[i]+a[j]+a[k]==s){
                    vector<int> temp;
                    ans.push_back(temp);
                    ans.push_back();
                }
            }
        }
    }
    return ans;
}