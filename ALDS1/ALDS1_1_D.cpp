#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    int r, min, max;
    max = -1000000000;
    cin >> min;
    for (int i = 1; i < N; i++) {
        cin >> r;
        if (r - min > max) { max = r - min; }
        if (r < min) { min = r; }
    }
    cout << max << endl;
    return 0;
}
