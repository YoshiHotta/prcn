/*
#include <vector>
#include <cmath>

const double EPS = 1e-10;
#define equals(a, b) (fabs((a) - (b)) < EPS )

using namespace std;

struct Point {
    double x, y;

    Point(double x_, double y_) : x(x_), y(y_){}

    Point operator+(Point &p) {
        return Point(this->x + p.x, this->y + p.y);
    }

    Point operator-(Point &p) {
        return Point(this->x - p.x, this->y - p.y);
    }

    Point operator*(double k) {
        return Point(this->x * k, this->y * k);
    }

    Point operator/(double a) {
        return Point(x / a, y / a);
    }

    double norm() { return sqrt(x * x + y * y); }

    bool operator<(const Point &p) {
        return x != p.x ? x < p.x : y < p.y;
    }

    bool operator==(const Point &p) {
        return fabs(this->x - p.x) < EPS && fabs(this->y - p.y) < EPS;
    }

    double dot(Point &p) {
        return this->x * p.x + this->y * p.y;
    }

    double cross(Point &p) {
        return this->x * p.y - this->y * p.x;
    }

};

typedef Point Vector;

struct Segment {
    Point p1, p2;
    Segment(Point p1_, Point p2_) : p1(p1_), p2(p2_) {}
};

typedef Segment Line;

class Circle {
    Point c;
    double r;

    Circle(Point c, double r = 0.0) : c(c), r(r) {}
};

typedef vector<Point> Polygon;

double norm(Vector a) {
    return sqrt(a.x * a.x + a.y * a.y);
}

*/
