#include <iostream>
#include <cmath>
using namespace std;


int main() {
    float a, b;
    cin >> a;
    cin >> b;

    int n = 1;
    while (a*pow(3,n) <= b*pow(2,n)) {
        n++;
    }

    cout << n << endl;
    return 0;
}