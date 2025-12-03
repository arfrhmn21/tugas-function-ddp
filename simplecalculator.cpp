#include <iostream>
#include <cctype>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

double substrack(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

void interface(int userMenuChoice, float x, float y) {
    switch(userMenuChoice) {
        case 1:
            cout << "\nMenu yang Anda Pilih Adalah Pertambahan" << endl;
            cout << "Hasil dari " << x << " + " << y << " adalah " << sum(x, y);
            break;
        case 2:
            cout << "\nMenu yang Anda Pilih Adalah Pengurangan" << endl;
            cout << "Hasil dari " << x << " - " << y << " adalah " << substrack(x, y);
            break;
        case 3:
            cout << "\nMenu yang Anda Pilih Adalah Perkalian" << endl;
            cout << "Hasil dari " << x << " x " << y << " adalah " << multiply(x, y);
            break;
        case 4:
            cout << "\nMenu yang Anda Pilih Adalah Pembagian" << endl;
            cout << "Hasil dari " << x << " / " << y << " adalah " << divide(x, y);
            break;
    }
}

int main() {
    bool isRunning = true;
    char yesOrNo;

    do {
        system("cls");

        int userMenuChoice;
        float x, y;
    
        cout << "=== Simple Mini Calculator ===" << endl;
        cout << "1. Pertambahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Menu (0-4): "; cin >> userMenuChoice;
        
        while (userMenuChoice < 0 || userMenuChoice > 4) {
            cout << endl;
            cout << "Menu tidak valid!" << endl;
            cout << "Pilih Menu (0-4): "; cin >> userMenuChoice;
        }
    
        if (userMenuChoice == 0) {
            cout << "Terimakasih Telah Menggunakan Program Kami.";
            return 0;
        }
    
        cout << "Masukkan angka pertama: "; cin >> x;
        cout << "Masukkan angka kedua: "; cin >> y;
    
        while (userMenuChoice == 4 && y == 0) {
            cout << endl;
            cout << "Angka pembagi tidak boleh 0" << endl;
            cout << "Masukkan angka kedua: "; cin >> y;
        }
    
        interface(userMenuChoice, x, y);

        cout << "\n\nApakah ingin mengulagi Program? (y/n): "; cin >> yesOrNo;
        while (tolower(yesOrNo) != 'y' && tolower(yesOrNo) != 'n') {
            cout << "\nInput Error! Mohon Masukkan (y/n): "; cin >> yesOrNo;
        }
        yesOrNo = tolower(yesOrNo);

        if (yesOrNo == 'y') {
            isRunning = true;
        } else {
            isRunning = false;
        }        
    } while (isRunning);

    cout << "\nTerimakasih Telah Menggunakan Program Kami.";

    return 0;
}