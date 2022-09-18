#include<iostream>
using namespace std;

    int firstOcc(int arr[],int n,int key){
        int start=0,end=n-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
                    //if equals
            }else if(key > arr[mid]){
                    start=mid+1;
            }else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }

    int lastocc(int arr[],int n,int key){
        int start=0,end=n-1,ans=-1;
        int mid=start+(end-start)/2;

            while(start<=end){
                if(arr[mid]==key){
                    ans=mid;
                    start=mid+1;
                }
                else if(key>arr[mid]){
                        start=mid+1;
                }else{
                    end=mid-1;
                }
                mid=start+(end-start)/2;
            }
            return ans;

    }


    int main(){
            int even[6]={1,2,3,3,5};

            cout<<"the occurance is"<<firstOcc(even,6,3)<<endl;
            cout<<"the last occurance is "<<lastocc(even,6,3)<<endl;
    return 0;

}