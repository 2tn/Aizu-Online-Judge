#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int a, b;
    std::cin >> a >> b;
    if (a < b) {
        std::cout << "a < b" << '\n';
    } else if (a > b) {
        std::cout << "a > b" << '\n';
    } else {
        std::cout << "a == b" << '\n';
    }
    return 0;
}
