#include "iostream"
#include <math.h>

using namespace std;

class Diem {
    private:
        double x, y;
    public:
        void xuat();
        void khoitao(double xx = 0, double yy = 0);
        double khoangcach(Diem u);
        double chuvi(Diem u, Diem v);
        double dientich(Diem u, Diem v);
};

void Diem::khoitao(double x, double y)
{
    this->x = x;
    this->y = y;
}

void Diem::xuat() {
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}

double Diem::khoangcach(Diem u)
{
    return sqrt(pow(u.x - x,2) + pow(u.y - y,2));
}

double Diem::chuvi(Diem u, Diem v)
{
    double canh1 = this->khoangcach(u);
    double canh2 = u.khoangcach(v);
    double canh3 = v.khoangcach(*this);
    return canh1 + canh2 + canh3;
}

double Diem::dientich(Diem u, Diem v)
{
    double p = this->chuvi(u, v) / 2;
    double a = this->khoangcach(u);
    double b = u.khoangcach(v);
    double c = v.khoangcach(*this);
    return sqrt(p * (p - a) * (p - b) * (p - c));

}

int main()
{
    Diem p1, p2, p3;
    p1.khoitao();
    p2.khoitao(1, 2);
    p3.khoitao(1, 2);

    cout << p1.chuvi(p2, p3) << endl;
    cout << p1.dientich(p2, p3) << endl;

    return 0;
}