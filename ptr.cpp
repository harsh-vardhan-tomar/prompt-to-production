#include<iostream>
using namespace std;

int main(){

    int num=12;
    cout<<&num<<endl;
    int *ptr=&num;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<(*ptr)+1<<endl;
    cout<<*(ptr+1)<<endl;
    (*ptr)++;
    cout<<num<<endl;

    return 0;
    
}