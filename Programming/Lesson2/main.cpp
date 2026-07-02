#include <iostream>
using namespace std;

class Diem {
    private:
        double x, y;
    public:
        void khoitao(double xx, double yy);
        void nhap();
        void xuat();
        void dichuyen(double dx, double dy);
};

void Diem::khoitao(double xx, double yy) {
    x = xx;
    y = yy;
}

void Diem::nhap() {
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}

void Diem::xuat() {
    cout << "(" << x << ", " << y << ")" << endl;
}

void Diem::dichuyen(double dx, double dy) {
    x += dx;
    y += dy;
}


int main() {
    Diem d1;
    d1.khoitao(1.0, 2.0);
    d1.xuat();

    d1.dichuyen(3.0, 4.0);
    d1.xuat();

    return 0;
}