/*
#include <iostream>
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


int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        double x0, y0;
        double x1, y1;
        double x2, y2;
        double x3, y3;
        cin >> x0 >> y0;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        auto p0 = Point(x0, y0);
        auto p1 = Point(x1, y1);
        auto p2 = Point(x2, y2);
        auto p3 = Point(x3, y3);
        auto v1 = p1 - p0;
        auto v2 = p2 - p3;
        double dt = v1.dot(v2) / v1.norm() / v2.norm();
        if(abs(dt - 1.0) < EPS || abs(dt + 1.0) < EPS ) {
            cout << 2 << endl;
        } else if(abs(dt) < EPS) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }


    return 0;
}



*/
