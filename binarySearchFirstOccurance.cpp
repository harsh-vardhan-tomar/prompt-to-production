#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int beg=0,end=n-1;

    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        
    }
    return -1;
}

int main(){

    int arr[]={10,20,30,42,42,116,678,999};
    
    cout<<firstOcc(arr,8,42)<<endl;
    return 0;

}