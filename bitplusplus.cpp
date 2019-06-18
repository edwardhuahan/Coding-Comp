#include <iostream>
using namespace std;

int main() {
    int n,X;
    cin >> n;

    X = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s[1] == '+') {
            X++;
        } else {
            X--;
        }
    }

    cout << X << endl;

    return 0;
}
