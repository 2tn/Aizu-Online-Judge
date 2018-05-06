#include <iostream>
#include <math.h>
using namespace std;

bool IsPrime(int a);

int  main(int argc, char const *argv[]) {
    int n, a, c;
    c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (IsPrime(a)) { c++; }
    }
    cout << c << endl;
}

bool IsPrime(int a) {
    if (a < 2) { return false; }
    if (a == 2) { return true; }
    if (a % 2 == 0) { return false; }

    double sqrtnum = sqrt(a);

    for (int i = 3; i <= sqrtnum; i++) {
        if (a % i == 0) { return false; }
    }
    return true;
}
