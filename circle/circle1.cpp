
#include <iostream>
#include "circle1.h" 

using namespace std;




Circle::Circle() {   // 위임생성자는 c++ 11 버전에서만 처리..
    radius = 1; 
    cout << " 기본생성자 호출 " << "반지름은 " << radius << " 원 생성 " << endl; 
}


Circle::Circle(int r) {
    radius = r;
    cout << " 추가 생성자 호출 " << "반지름은 " << radius << " 원 생성 " << endl; 
}

double Circle::getArea() {
    return 3.14 * radius * radius; 
}


