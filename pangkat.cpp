#include <iostream>
#include <cctype>
using namespace std;

double power(int a, int b) {
    if (b == 0) {
        return 1;
    }

    if (b < 0) {
        return 1 / (a * power(a, -b - 1));
    }
    return a * power(a, b - 1);
}

int main() {
    bool isRunning = true;
    char yesOrNo;

    do {
        system("cls");
        int x, y;
    
        cout << "=== Power Calculation ===" << endl;
        cout << "Masukkan Basis: "; cin >> x;
        cout << "Masukkan Pangkat: "; cin >> y;
    
        cout << x << "^" << y << " = " << power(x, y);

        cout << "\nApakah ingin mengulangi program? (y/n): "; cin >> yesOrNo;

        while (tolower(yesOrNo) != 'y' && tolower(yesOrNo) != 'n') {
            cout << "\nInput Error! Mohon Masukkan (y/n): "; cin >> yesOrNo;
        }

        if (tolower(yesOrNo) == 'y') {
            isRunning = true;
        } else {
            isRunning = false;
        }

    } while (isRunning);

    cout << "\nTerimakasih Telah Menggunakan Program Kami.";

    return 0;
}