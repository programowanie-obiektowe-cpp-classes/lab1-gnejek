#include <iostream>
class Wektor2D
{
public:
    Wektor2D() {}
    Wektor2D(double a, double b)
    {
        x = a; y = b;
        std::cout << "wartosci pobrane..." << std::endl;
    }
    ~Wektor2D()
    {
        std::cout <<"wspolrzedna x= "<< x <<"\t"<<"wspolrzedna y = "<< y << std::endl;
        std::cout << "desktrukcja..." << std::endl;
    }
    double norm()
    {
        return sqrt(x * x + y * y);
    }
    void dlugosc()
    {
        std::cout << norm() << std::endl;
    }
    void print()
    {
        std::cout <<"wspolrzedna x=" << x << ", "<<"wspolrzedna y=" << y << std::endl;
    }
    void setX(double a)
    {
        x = a;
    }
    void setY(double b)
    {
        y = b;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
private:
    double x;   
    double y;
};

Wektor2D operator+ (Wektor2D A, Wektor2D B)
{
    return Wektor2D{ A.getX() + B.getX(), A.getY() + B.getY()};
}

double operator*(Wektor2D A, Wektor2D B)
{
    double c = A.getX() * B.getX() + A.getY() * B.getY();
    return c;
}