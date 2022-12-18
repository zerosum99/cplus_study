#include <stdio.h>

void func(int* a) {
    int b = 9;
    *a = 5;
    // a는 지역변수라서 실제 다른 포인터 지정해서 외부에 영향을 미치지 않믐 
    a = &b; 
}


int main(int args, char** argv) {
    int x = 3;
    int* xptr = &x; 
    printf(" 값 %d \n", x);
    func(xptr); 
    printf(" 값 %d \n", x);
}