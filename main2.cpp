#include<iostream>
using namespace std;

void solve(int arr[]){ // array hamesha pass by reference hota h .
    cout <<sizeof(arr);
}

int main(){
    int arr[]={1,23,45,44};
    int n=4;

    for(int i=0;i<n;i++) {
			for(int j=1;j<n-i-1;j++) {
				if(arr[i]>arr[j]) {
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}