#include <iostream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point(double xCoord, double yCoord, double zCoord) : x(xCoord), y(yCoord), z(zCoord) {}

    void setX(double xCoord) {
        x = xCoord;
    }

    void setY(double yCoord) {
        y = yCoord;
    }

    void setZ(double zCoord) {
        z = zCoord;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }

    void print() const {
        std::cout << "Point(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    Point p(1.0, 2.0, 3.0);
    p.print();
    p.setX(4.0);
    p.setY(5.0);
    p.setZ(6.0);
    p.print();
    std::cout << "X: " << p.getX() << ", Y: " << p.getY() << ", Z: " << p.getZ() << std::endl;
    return 0;
}
