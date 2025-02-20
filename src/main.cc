#include <iostream>
int main() {
    int a = 5;
    int b = 0;
    std::cout << "Result: " << a/b << std::endl; // 故意制造崩溃
    return 0;
}
