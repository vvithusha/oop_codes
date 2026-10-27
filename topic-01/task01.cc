#include <iostream>
using namespace std;

class shape{
    public:
        virtual void draw() = 0;
};
class circle : public shape{
    public:
        void draw() override{
            cout <<"Drawing Circle"<<endl;
        }
};
class rectangle : public shape{
    public:
        void draw() override{
            cout <<"Drawing Rectangle"<<endl;
        }
};
class triangle : public shape{
    public:
        void draw() override{
            cout <<"Drawing Triangle"<<endl;
        }
};
int main()
{
    circle c;
    rectangle r;
    triangle t;

    c.draw();
    r.draw();
    t.draw();
    return 0;
}