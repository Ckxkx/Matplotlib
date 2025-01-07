#include <iostream>

using namespace std;

class Location{
public:
    int x, y;
    Location(int x, int y) : x(x), y(y) {}
    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

class Point : public Location {
public:
    Point(int x, int y) : Location(x, y) {}
    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }
};

class Circle : public Point {
public:
    int r;
    Circle(int x, int y, int r) : Point(x, y), r(r) {}
    void show() {
        cout << "x = " << x << ", y = " << y << ", r = " << r << endl;
    }
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }
    void draw() {
        cout << "画圆" << endl;
    }
    void getArea() {
        cout << "圆的面积为：" << 3.14 * r * r << endl;
    }
};

int main() {
    Circle c(1, 2, 3);
    c.show();
    c.move(1, 2);
    c.show();
    c.draw();
    c.getArea();
    return 0;
}
