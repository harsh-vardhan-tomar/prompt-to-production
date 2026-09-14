#include<iostream>
using namespace std;

class Student{
  public:
   string name;
   int id;
   int nos;
   int age;
   //default constructor
   Student(){
    cout<<"this is a student default constructor"<<endl;
   }

   //parameterized constructor
   Student(int id,int nos,string name,int age){
    cout<<"this is a student parameterized constructor"<<endl;
    this->id=id;
    this->nos=nos;
    this->name=name;
    this->age=age;
   }

   //copy constructor
   Student(const Student &srcobj){ // srcobj=>A
    cout<<"this is a student parameterized copy constructor"<<endl;
    this->id=srcobj.id;
    this->nos=srcobj.nos;
    this->name=srcobj.name;
    this->age=srcobj.age;
   }
   void study(){
    cout<<this->name<<" is studying"<<endl;
   }
   void sleep(){
    cout<<this->name<<" is sleeping"<<endl;
   }
   void bunk(){
    cout<<this->name<<" has bunked class"<<endl;
   }
   ~Student(){
    cout<<"this is a student default destructor"<<endl;
   }
};

int main(){
  //  Student A;
  //  A.name="churan";
  //  A.age=12;
  //  A.nos=5;
  //  A.id=1;
  //  A.sleep();
  //  A.study();
    
    
  Student A(1,5,"churan",12);
  Student B(2,6,"papita",13);
 // Student C(4,6,"chaman",14);
  cout<<A.name<<" "<<A.age<<endl;
  A.bunk();
  B.sleep();

  //Copy constructor
  Student C=A;
  cout<<C.name<<" "<<C.age<<" "<<C.id<<" "<<C.nos<<endl;
  return 0;
}