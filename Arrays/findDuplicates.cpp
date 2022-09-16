#include<iostream>
using namespace std;

int findDuplicate(int arr[]){
    int ans=0;
for(int i=0;i<arr.size();i++){
   ans=ans^arr[i];

}
for(int i=0;i<arr.size();i++){
    ans=ans^i;
}
return ans;
}



int main(){
int arr[10]={1,2,3,4,5,4};

    cout<<"the duplicate element is "<<findDuplicate(arr)<<endl;
    cout<<"terminating";
    return 0;
}