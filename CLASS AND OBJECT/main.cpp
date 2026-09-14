#include<iostream>
using namespace std;
// create class
class Student{
public:
    int age;
    string course;
    string name;
    int marks;
    void sleeping(){
        cout<<"I am sleeping"<<endl;
    }
    void studying(){
        cout<<name<<" is studying"<<endl;
    }
};

int main(){
    
    cout<<sizeof(Student)<<endl;

    //Object Creation

    //static way
    Student s1;
    s1.age=12;
    s1.name="chaman";
    s1.studying();

    // dynamic way
    Student *s=new Student();
    s->course="btech cse";
    s->name="aman";
    s->sleeping();
    s->studying();
    return 0;
}