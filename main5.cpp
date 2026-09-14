#include<iostream>
using namespace std;
void solve(string &n){  //pass by reference . copy nhi banti h . 
    cout<<n<<endl;
    n[2]='e';
    cout<<n<<endl;
}

int main(){

    string ch="harsh";
    solve(ch);
    cout<<ch<<endl;
    return 0;
}