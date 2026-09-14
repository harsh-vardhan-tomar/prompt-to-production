#include<iostream>
using namespace std;
int countEvenNo(int arr[],int size,int &count){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int count=0;
    cout<<countEvenNo(arr,size,count)<<endl;
    cout<<count<<endl;
    return 0;
}