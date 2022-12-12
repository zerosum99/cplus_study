#include <iostream>

using namespace std;

int main() {

    cout << " 네임스페이스 이름공간 접두사 제거 " << endl; 

    cout << " 넓이를 입력하세요!! ";

    int width;
    cin >> width;

    cout << " 높이를 입력하세요!!"; 
    int height;
    cin >> height;

    int area = width * height;
    cout << " 면적은 " << area << endl; 

    return 0; 
}