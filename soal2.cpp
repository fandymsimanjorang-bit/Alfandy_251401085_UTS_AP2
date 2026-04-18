#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input kode biner : ";
    cin >> n;
    int temp = n, desimal = 0, pangkat = 1;
    bool valid = true;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != 0 && digit != 1) {
            valid = false;
            break;
        }

        desimal += digit * pangkat;
        pangkat *= 2;
        temp /= 10;
    }

    if (valid)
        cout << "Angka desimal dari biner " << n << " adalah = " << desimal;
    else
        cout << "Pesan Rusak!";

    return 0;
}