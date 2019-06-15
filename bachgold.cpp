#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        int h = n/2;
        cout << h << endl;
        for (int i = 0; i < h; i++) {
            cout << 2 << " ";
        }
    } else {
        int h = (n-3)/2;
        cout << h+1 << endl;
        for (int i = 0; i<h; i++) {
            cout << 2 << " ";
        }
        cout << 3;
    }

    cout << endl;
    return 0;
}