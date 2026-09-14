#include<iostream>
using namespace std;

int lastOcc(int arr[],int n,int key){
    int beg=0,end=n-1;
    int ans=-1;

    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(key==arr[mid]){
            ans=mid;
            beg=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        
    }
    return ans;
}

int main(){

    int arr[]={10,20,30,42,42,42,116,678,999};
    
    cout<<lastOcc(arr,9,42)<<endl;
    return 0;

}