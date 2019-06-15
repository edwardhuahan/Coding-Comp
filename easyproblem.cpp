#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int s;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        s += m;
    }

    if (s > 0) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }

    return 0;
}