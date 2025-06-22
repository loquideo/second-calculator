#include <iostream>


int main() {
    char sd;
    int a, b;
    int q;
    std::cout << "write a:";
    std::cin >> a;
    std::cout << "write b:";
    std::cin >> b;
    std::cout << "what do you want? ( /, +, -, *)" << std::endl;
    std::cin >> sd;
    if (sd == '/') {
        q = a / b;
        std::cout << q << std::endl;
    }
    if (sd == '+') {
        q = a + b;
        std::cout << q << std::endl;
    }
    if (sd == '-') {
        q = a - b;
        std::cout << q << std::endl;
    }
    if (sd == '*') {
        q = a * b;
        std::cout << q << std::endl;
    }
    if (a >= 32000) {
        std::cout << "write num a < 32000" << std::endl;
    }
    else if (a <= -32000) {
        std::cout << "write num a > -32000" << std::endl;
    }
    else if (b <= -32000) {
        std::cout << "write num b > -32000" << std::endl;
    }
    else if (b >= 32000) {
        std::cout << "write num b > 32000" << std::endl;
    }
    return 0;
}
