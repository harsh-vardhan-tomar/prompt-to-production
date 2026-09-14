#include<iostream>
using namespace std;
void solve(int a){ // pass by value . copy banti h variable ki . 
    cout<<a<<endl; 
    a++;
    cout<<a<<endl;
}

int main(){

    int a=23;
    solve(a);
    cout<<a<<endl;
    return 0;
}