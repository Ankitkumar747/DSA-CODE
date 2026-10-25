#include<iostream>
using namespace std;

class Student{
    private :
        char name[20];
        int enrollment_no;
        int age;
        char branch;
        int semester;
        
    public:
        void getdata(){
            cout<<"Enter your name = ";
            cin>>name;
            cout<<"Enter your enrollment no = ";
            cin>>enrollment_no;
            cout<<"Enter your age = ";
            cin>>age;
            cout<<"Enter your branch = ";
            cin>>branch;
            cout<<"Enter your semester = ";
            cin>>semester;
        }

        void putdata(){
            cout<<"\n Name          = "<<name;
            cout<<"\n Enrollment No = "<<enrollment_no;
            cout<<"\n Age           = "<<age;
            cout<<"\n Branch        = "<<branch;
            cout<<"\n Semester      = "<<semester;
        }
};

int main(){
    Student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.putdata();
    s2.putdata();
    return 0;
}