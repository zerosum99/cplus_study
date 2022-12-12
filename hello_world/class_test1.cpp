#include <iostream>

using namespace std;

class Circle {
public : 
    int radius;
    double getArea();
    Circle();
    Circle(int r); 
}; 

Circle::Circle() : radius(1) {   //  초기값으로 초기화는 가능 
    //radius = 1; 
    cout << " 기본생성자 호출 " << "반지름은 " << radius << " 원 생성 " << endl; 
}

/*

Circle::Circle() {   // 위임생성자는 c++ 11 버전에서만 처리..
    radius = 1; 
    cout << " 기본생성자 호출 " << "반지름은 " << radius << " 원 생성 " << endl; 
}
*/ 

Circle::Circle(int r) {
    radius = r;
    cout << " 추가 생성자 호출 " << "반지름은 " << radius << " 원 생성 " << endl; 
}

double Circle::getArea() {
    return 3.14 * radius * radius; 
}

class Rectangle {
public : 
     int width;
     int height;
     int getArea();
};

int Rectangle::getArea() {
    return width * height;
}

int main() {

    Rectangle rect;
    rect.width = 3;
    rect.height = 3;

    cout << "사각형의 면적은 " << rect.getArea() << endl; 

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