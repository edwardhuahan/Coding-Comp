#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;


    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        
        int n = s.length();

        for (int i = n-1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}  