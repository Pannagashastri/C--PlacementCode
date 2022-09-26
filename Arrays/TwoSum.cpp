#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>&num, int target){
    vector<int> gg;
for(int i=0;i<num.size();i++){
    if(num[i]+num[i+1]==target){

        gg.push_back(i);
        gg.push_back(i+1);
    
    }
}
return gg;
}
void printArray(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
vector<int> v;
v.push_back(2);
v.push_back(7);
v.push_back(11);
v.push_back(15);
v.push_back(3);
v.push_back(6);

 vector<int> ans=twoSum(v,9);
printArray(ans);



}