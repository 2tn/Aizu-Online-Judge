#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int W, H, x, y, r;
    std::cin >> W >> H >> x >> y >> r;
    if ((x >= r && y >= r) && (x <= W - r && y <= H - r)) {
        std::cout << "Yes" << '\n';
    } else {
        std::cout << "No" << '\n';
    }

    return 0;
}
