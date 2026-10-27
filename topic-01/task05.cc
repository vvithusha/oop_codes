#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person details" << endl;
    }
};

class Student : virtual public Person {
};
class Employee : virtual public Person {};

class TeachingAssistant : public Student, public Employee {};

int main() {
    TeachingAssistant ta;
    ta.showPerson();

    return 0;
}