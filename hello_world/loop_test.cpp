#include <iostream>

using namespace std;  


int main() {
    char name1[4] = {'a', 'b','c','\0'};
    char name2[3] = {'b','b','b'};    // 문자열 처리가 안됨.  마지막에 널문자가 없음 
    char name3[4] = "abc";
    char name4[]  = "bbb"; 
    cout <<  name2 << endl; 
    for (int n=0; n < 10; n++) 
        cout << n; 

    cout << " 이름을 입력하세요 11 " ; 
    char name5[11];
    cin >> name5;
    cout << "이름은 " << name5 << endl; 
    cout << " 이름을 입력하세요 12 " ; 
    char name6[20] ;
    cin.getline(name6, 20, '\n'); 


    return 0;
}