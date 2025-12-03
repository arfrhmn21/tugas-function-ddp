#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    int x, y;

    cout << "=== Power Calculation ===" << endl;
    cout << "Masukkan Basis: "; cin >> x;
    cout << "Masukkan Pangkat: "; cin >> y;

    cout << x << "^" << y << " = " << power(x, y);
    return 0;
}