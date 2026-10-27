#include <iostream>
using namespace std;

class Animal {
public:
     virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }

    //virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() override{
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();
    Animal* ptr = &d;

    ptr->sound();
}