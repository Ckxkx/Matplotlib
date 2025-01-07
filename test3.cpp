#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
    private:
        double a, b, c;
    public:
        Triangle(double a, double b, double c) : a(a), b(b), c(c) {}
        Triangle(const Triangle &t) : a(t.a), b(t.b), c(t.c) {}
        ~Triangle() {}
        double getArea() {
            return 0.5 * a * b * sin(c);
        }
        double circulate() {
            return a + b + c;
        }
        friend Triangle operator+(const Triangle&t1, const Triangle&t2){
            return Triangle(t1.a + t2.a, t1.b + t2.b, t1.c + t2.c);
        }
        Triangle operator=(const Triangle&t){
            a = t.a;
            b = t.b;
            c = t.c;
            return *this;
        }
        friend ostream& operator<<(ostream& os, const Triangle& t) {
            os << "a = " << t.a << ", b = " << t.b << ", c = " << t.c << endl;
            return os;
        }
};

int main() {
    Triangle t1(3, 4, 5);
    Triangle t2(6, 8, 10);
    Triangle t3 = t1 + t2;
    cout << t3;
    cout << "三角形的面积为：" << t3.getArea() << endl;
    cout << "三角形的周长为：" << t3.circulate() << endl;   
    return 0;
}   
