#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int x;
    for (size_t i = 1;; i++) {
        cin >> x;
        if (x == 0) { break; }
        std::cout << "Case " << i << ": " << x << '\n';
    }
}
