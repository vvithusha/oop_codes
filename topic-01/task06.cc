#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent constructor" << endl;
    }

    ~Parent() {
        cout << "Parent destructor" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child constructor" << endl;
    }

    ~Child() {
        cout << "Child destructor" << endl;
    }
};

int main() {
    Child c;
}