#include <iostream>
using namespace std;

int main() {
    string mantra;
    int i = 0, jumlah = 0;
    cout << "Masukkan Mantra : ";
    getline(cin, mantra);
    while (i < mantra.length()) {
        char c = mantra[i];
        // cek vokal (tidak case-sensitive)
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
            c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') {
            jumlah++;
        }
        i++;
    }
    if (jumlah > 0) {
        cout << "Kekuatan mantra: " << jumlah << " vokal";
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal.";
    }

    return 0;
}