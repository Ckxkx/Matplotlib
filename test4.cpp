#include <iostream>

using namespace std;

class Shapes{
    public:
        virtual void display() = 0;
        virtual double getArea() = 0;
        virtual ~Shapes() {}
};

class Circle : public Shapes{
    public:
        double r;
        Circle(double r) : r(r) {}
        void display() {
            cout << "这是一个圆" << endl;
        }
        double getArea() {
            return 3.14 * r * r;
        }
        ~Circle() {
            cout << "圆被销毁" << endl;
        }
};
class Rectangle : public Shapes{
    public:
        double a, b;
        Rectangle(double a, double b) : a(a), b(b) {}
        void display() {
            cout << "这是一个矩形" << endl;
        }
        double getArea() {
            return a * b;
        }
        ~Rectangle() {
            cout << "矩形被销毁" << endl;
        }
};

int main() {

    Shapes *p = new Rectangle(1, 2);
    p->display();
    cout << "矩形的面积为：" << p->getArea() << endl;
    Shapes *s = new Circle(1);
    s->display();
    cout << "圆的面积为：" << s->getArea() << endl;

    delete p;
    delete s;   

    Shapes *shapes[2] = {new Circle(1), new Rectangle(1, 2)};
    for (int i = 0; i < 2; i++) {
        shapes[i]->display();
        cout << "面积为：" << shapes[i]->getArea() << endl;
    }   

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }


    return 0;
}