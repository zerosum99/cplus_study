#include <iostream>


double area(int c);     // 함수 선언
double area(int c) {    // 함수 정의  
    return 3.14*c *c ; 
}


int main() {
    int n = 3; 
    std::cout << area(n) << std::endl; 
    return 0; 
}
