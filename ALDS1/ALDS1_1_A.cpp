#include <iostream>

using namespace std;

void display(int *array, int N);

int  main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    int *array = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    display(array, N);
        for (int i = 1; i < N; i++) {
            int v, j;
            v = array[i];
            j = i - 1;
            while (j >= 0 && array[j] > v) {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = v;
            display(array, N);
        }
    return 0;
}

void display(int *array, int N) {
    for (int i = 0; i < N - 1; i++) {
        cout << array[i] << " ";
    }
    cout << array[N - 1] << endl;
}
