#include<iostream>
using namespace std;

int main(){

    //dynamic memory
   /* int *p=new int;
    *p=23;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    delete p;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    */
   int *ptr=new int[5];
   ptr[0]=31;
   ptr[1]=33;
   ptr[2]=35;
   *(ptr+3)=37;
   *(ptr+4)=39;
   for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
   }

   cout<<endl;
   cout<<*ptr<<endl;
   cout<<ptr<<endl;
   cout<<&(ptr[0])<<endl;
   
   for(int i=0;i<5;i++){
    cout<<*(ptr+i)<<" ";
   }
   delete []ptr;
    return 0;
}