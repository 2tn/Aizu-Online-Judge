#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int s;
    std::cin >> s;
    std::cout << s / 3600 << ":" << s % 3600 / 60 << ":" << s % 60 << endl;
    return 0;
}
