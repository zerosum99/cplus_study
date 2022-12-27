#include <iostream>
#include "add.h"

using namespace std;

/*
* cmake 파일 처리
*                실행파일, 추가파일, 메인파일 순으로 입력하기 
* ADD_EXECUTABLE(main add.cpp main.cpp)
****
* cmake 파일이 만들어진 후에 처리 
* make 파일처리 
* *****
* 실제 실행파일이 만들어진다. 
* 참고자료 : https://reakwon.tistory.com/123
* 참고자료 (cmake) : https://junstar92.tistory.com/204
*/


int main() {
    cout << " cmake testing " << endl;
    cout << add(100,200) << endl;

}
