#include<iostream>
using namespace std;
void solve(string s){
    cout<<s<<endl;
    s[2]='u';
    cout<<s<<endl;
}

int main(){
    string str="chaman";
    solve(str);
    cout<<str<<endl;
    return 0;
}