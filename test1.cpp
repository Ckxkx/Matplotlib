#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
public:
    
public:
    int a, b, c;
    Triangle(int a, int b, int c) : a(a), b(b), c(c) {
        while(!isTriangle()) {
            cout << "请重新输入三条边" << endl;
            cin >> a >> b >> c;
        }
    }

    bool isTriangle() {
        return a + b > c && a + c > b && b + c > a;
    }
    void perimeter() {
        cout << "三角形的周长为：" << a + b + c << endl;
    }

    void area() {
        double p = 0.5 * (a + b + c);
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "三角形的面积为：" << s << endl;
    }
    void type(){
        if (a * a  + b * b > c * c) {
            cout << "锐角三角形" << endl;
        } else if (a * a  + b * b < c * c) {
            cout << "钝角三角形" << endl;
        } else {
            cout << "直角三角形" << endl;
        }
    }
    void getAddress(){
        cout << "成员变量地址：" << &a << " " << &b << " " << &c << endl;
    }
    void getSize(){
        cout << "成员变量大小：" << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << endl;
    }
    ~Triangle() {
        cout << "析构函数" << endl;
    }



};

int main() {


    Triangle t1(3, 4, 5);
    Triangle t2(6, 6, 6);

    Triangle *p1 = new Triangle(2, 2, 2);
    Triangle *p2 = new Triangle(5, 5, 5);

    delete p1;
    delete p2;

    t1.perimeter();
    t2.perimeter();
    t1.getSize();
    t1.getAddress(); 
    return 0;
}
