#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        long long int m; 
        cin >> m;
        
        short int c = 0;
        while (m != 1) {
            if (m % 2 == 0) {
                m/=2;
                c++;
            } else if (m%3==0) {
                m/=3;
                c+=2;
            } else if (m%5==0) {
                m/=5;
                c+=3;
            } else {
                c=-1;
                break;
            }
        }
        cout << c << endl;

    }

    return 0;
}