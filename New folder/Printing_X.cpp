#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i) {
                cout << "\\";
            } else if (j == N - i - 1) {
                cout << "/";
            } else if (i == N / 2 && j == N / 2) { 
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}