#include <iostream>
using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        person(string n,int a):name(n),age(a){}

        void returndetials()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<to_string(age)<<endl;
        }
};

class student:public person{
    private:
        int studentID;
    public:
        student(string n,int a,int id):person(n,a),studentID(id){}

        void returndetialss()
        {
           cout<<"Student ID: "<<studentID<<endl;
        }

};

class teacher:public person{
    private:
        string subject;
    public:
        teacher(string n,int a, string s):person(n,a),subject(s){}

        void returndetialst()
        {
            cout<<"Subject: "<<subject<<endl;
        }
};
int main()
{
    student s("John",20,1001);
    student s1("Alice",22,1002);

    teacher t("Mr.Smith",40,"Math");

    s.returndetials();
    s.returndetialss();

    cout<<endl;

    s1.returndetials();
    s1.returndetialss();

    cout<<endl;
    
    t.returndetials();
    t.returndetialst();

    return 0;
}