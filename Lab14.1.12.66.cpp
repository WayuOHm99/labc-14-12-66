/* LANG : C++ */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int row, i, j;
    string sign;

    cin >> row;
    cin >> sign;
    for (i = row; i >= 1; i--) {
        if (i >= 1) {
            for (j = 1; j <= i; j++) {
                if (j <= i) {
                    cout << sign << endl;
                }
            }
        }
        cout << "\n" << endl;
    }
    return 0;
}
