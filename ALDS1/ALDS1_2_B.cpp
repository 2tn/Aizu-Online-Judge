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
    int counter = 0;
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (array[j] < array[minj]) {
                minj = j;
            }
        }
        if (i != minj) {
            swap(array[i], array[minj]);
            counter++;
        }
    }
    display(array, N);
    cout << counter << endl;
    return 0;
}
