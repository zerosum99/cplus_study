#include <iostream>
#include "circle.h"

using namespace std;

int main() {

    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();

    cout << " donut의 면적 " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << " pizza 의 면적 " << area << endl;

    Circle circle(50);
    cout << " circle 의 면적 " << circle.getArea() << endl;
    

}