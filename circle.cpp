#include <iostream>
#include <string.h>

using namespace std;

class point {
        int xCo, yCo;
    public:
        point() {
            cout<<"Construction called for class point"<<endl;
        }
        void getPoint(int xCo, int yCo) {
            this -> xCo = xCo;
            this -> yCo = yCo;
        }
        void print() {
            cout<<"xCo = "<<xCo<<endl;
            cout<<"yCo = "<<yCo<<endl;
        }
        ~point() {
            cout<<"Destructor called for class point"<<endl;
        }
};

class circle : public point {
        float radius;
    public:
        circle() {
            cout<<"Construction called for class circle"<<endl;
        }
        void getCircle(float radius) {
            this -> radius = radius;
        }
        float getRadius() {
            return radius;
        }
        float area() {
            float a = 3.14 * radius * radius;
            return a;
        }
        void print() {
            cout<<"Radius: "<<radius<<endl;
            float f = area();
            cout<<"Area: "<<f<<endl;
        }
        ~circle() {
            cout<<"Destructor called for class circle"<<endl;
        }
};

class cylinder : public circle {
        int height;
    public:
        cylinder() {
            cout<<"Construction called for class cylinder"<<endl;
        }
        void getCylinder(int height) {
            this -> height = height;
        }        
        float surArea() {
            float r = getRadius();
            float a = 2 * 3.14 * r * height + 2 * 3.14 * r * r;
            return a;
        }
        float volume() {
            float r = getRadius();
            float v = 3.14 * r * 2 * height;
            return v;
        }
        void print() {
            cout<<"Height: "<<height<<endl;
            float a = surArea();
            float v = volume();
            cout<<"Surface area: "<<a<<endl;
            cout<<"Volume: "<<v<<endl;
        }
        ~cylinder() {
            cout<<"Destructor called for class cylinder"<<endl;
        }
};

int main() {
    int xCo, yCo, height;
    float radius;
    cout<<"xCo: ";
    cin>>xCo;
    cout<<"yCo: ";
    cin>>yCo;
    cout<<"Height: ";
    cin>>height;
    cylinder c;
    cout<<"Radius: ";
    cin>>radius;
    c.getPoint(xCo, yCo);
    c.getCircle(radius);
    c.getCylinder(height);
    c.point :: print();
    c.circle :: print();    
    c.print();
    return 0;
}
