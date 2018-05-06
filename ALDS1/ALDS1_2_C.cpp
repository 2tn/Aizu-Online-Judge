#include <iostream>

using namespace std;

struct card {
    char   suit;
    int    value;
    string ToString();
    card   Duplicate();
};

string card::ToString() {
    return suit + to_string(value);
}

card card::Duplicate() {
    card ret = { suit, value };
    return ret;
}

void display(card *array, int N) {
    for (int i = 0; i < N - 1; i++) {
        cout << array[i].ToString() << " ";
    }
    cout << array[N - 1].ToString()  << endl;
}

card *bubbleSort(card *A, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j > 0; j--) {
            if (A[j].value < A[j - 1].value) {
                swap(A[j], A[j - 1]);
            }
        }
    }
    return A;
}

card *selectionSort(card *A, int N) {
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A[j].value < A[minj].value) {
                minj = j;
            }
        }
        swap(A[i], A[minj]);
    }
    return A;
}

bool IsStable(card *before, card *after, int N) {
    for (int i = 0; i < N; i++) {
        int counter = 1;
        while (after[i].value == after[i + counter].value) {
            counter++;
        }
        if (counter > 1) {
            char *suitarray = new char[counter];
            int   c         = 0;
            for (int j = 0; j < N; j++) {
                if (before[j].value == after[i].value) {
                    suitarray[c] = before[j].suit;
                    c++;
                }
            }
            for (int j = 0; j < counter; j++) {
                if (after[i + j].suit != suitarray[j]) { return false; }
            }
        }
        i += counter - 1;
    }
    return true;
}

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    card *card_i = new card[N];
    card *card_b = new card[N];
    card *card_s = new card[N];

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        card_i[i].suit  = str[0];
        card_i[i].value = stoi(str.substr(1));
    }
    for (int i = 0; i <   N; i++) {
        card_b[i] = card_i[i].Duplicate();
        card_s[i] = card_i[i].Duplicate();
    }
    display(bubbleSort(card_b, N), N);
    if (IsStable(card_i, card_b, N)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    display(selectionSort(card_s, N), N);
    if (IsStable(card_i, card_s, N)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    return 0;
}
