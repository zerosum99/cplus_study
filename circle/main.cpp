#include <iostream>
#include "circle.h"

using namespace std;


/*
*  개별 모듈은 g++ -c 파일명
*  메인 모듈은 g++ -o 메인파일명 개별파일의 o 파일들 
*/

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