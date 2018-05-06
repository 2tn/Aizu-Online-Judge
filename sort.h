#include <iostream>
#include <math.h>
using namespace std;

int *insertionSort(int *A, int N);
int *bubbleSort(int *A, int N);
int *selectionSort(int *A, int N);
int  gcd(int x, int y);
bool IsPrime(int a);

int *insertionSort(int *A, int N) {
    for (int i = 1; i < N; i++) {
        int v, j;
        v = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
    }
    return A;
}

int *bubbleSort(int *A, int N) {
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = N - 1; i > 0; i--) {
            if (A[i] < A[i - 1]) {
                swap(A[i], A[i - 1]);
                flag = true;
            }
        }
    }
    return A;
}

int *selectionSort(int *A, int N) {
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }
        if (i != minj) { swap(A[i], A[minj]); }
    }
    return A;
}

int gcd(int x, int y) {
    if (x <= y) { swap(x, y); }
    while (x % y != 0) {
        x = x % y;
        if (x <= y) { swap(x, y); }
    }
    return y;
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
