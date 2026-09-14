#include<iostream>
using namespace std;

int main(){
    char ch='e';
    int num=56;
    int *ptr=&num;
    int **ctr=&ptr;
    int ***dtr=&ctr;

    cout<<num<<endl;
    cout<<&num<<endl;
   // cout<<*num<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ctr<<endl;
    cout<<&ctr<<endl;
    cout<<*ctr<<endl;
    cout<<**ctr<<endl;
    cout<<dtr<<endl;
    cout<<&dtr<<endl;
    cout<<*dtr<<endl;
    cout<<**dtr<<endl;
    cout<<***dtr<<endl;

    void *ptr=&ch;
    
}