#include <iostream>

using namespace std;

void display(int *array, int N) {
    for (int i = 0; i < N - 1; i++) {
        cout << array[i] << " ";
    }
    cout << array[N - 1] << endl;
}

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    int *array = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    int  counter = 0;
    bool flag    = true;
    while (flag) {
        flag = false;
        for (int i = N - 1; i > 0; i--) {
            if (array[i] < array[i - 1]) {
                swap(array[i], array[i - 1]);
                counter++;
                flag = true;
            }
        }
    }
    display(array, N);
    cout << counter << endl;
    return 0;
}
