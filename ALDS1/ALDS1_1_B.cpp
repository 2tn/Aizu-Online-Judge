#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int x, y;
    cin >> x >> y;
    if (x <= y) { swap(x, y); }
    while (x % y != 0) {
        x = x % y;
        if (x <= y) { swap(x, y); }
    }
    cout << y << endl;
    return 0;
}
