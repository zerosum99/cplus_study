#include <iostream>

using std::cout;         // 특정한 것만 접두사를 제거할 대 사용 

namespace kite {
    int x = 100;
}

namespace exec {
    int x1 = 888;
}

using namespace exec;     // 네임스페이스 접두사를 전부 제거할때 사용

int main() {
    int x = 7777;

    cout << x << std::endl;
    std::cout << kite::x << std::endl;
    std::cout << exec::x1 << x1  << std::endl; 
    return 0; 
}