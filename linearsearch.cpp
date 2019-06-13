#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, s;
    cin >> n;
    cin >> s;

    int index = -1;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num == s) {
            index = i+1;
        }
    }

    cout << index << endl;
    return 0;
}