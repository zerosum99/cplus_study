#include <iostream>
#include <string>

using namespace std;  


int main() {

    string song("fallin in love with yoy");
    string elvis("Elvis presley");

    cout << song << endl;
    cout << elvis << endl; 

    cout << "문자열의 첫글자 출력 " << elvis[0] << endl; 

    string stringer;
    getline(cin,stringer);

    if (stringer == elvis) 
         cout << " ok ";
    else 
         cout << " no ";
        


}