#include <iostream>
using namespace std;

class Point {
    private:
        int _x;
        int _y;
    public:
        Point(): _x(0), _y(0) {}

        void print() { cout << _x << ", " << _y << endl; }
        void set_point(int x, int y) { _x = x; _y = y; }
};

// this COPIES p1 to pnt, it does not update p1
Point foo(Point pnt) {
    pnt.set_point(500, 500);
    pnt.print();

    return pnt;
}

int main() {
    Point p1;
    p1.set_point(10, 10);
    p1.print();

    // default copy constructor
    Point p2 = p1;
    p1.print();

    // this COPIES p1 to pnt, it does not update p1
    foo(p1);
    p1.print();

    // this COPIES p1 to pnt, then sets p1 as pnt as the return value
    p1 = foo(p1);
    p1.print();

    return 0;
}
