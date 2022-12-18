#include <iostream>
#include "circle1.h"

using namespace std;


/*
*  개별 모듈을 컴파일 할 때 :  g++ -c 파일명
*  g++ -c foo.cpp
*  여러 모듈을 실행파일로 만들 때 : 메인 모듈은 g++ -o 메인파일명 개별파일의 o 파일들 
*  g++ -o exe_name main.cpp foo.o
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
    
    return 0; 
}