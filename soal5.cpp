#include <iostream>
using namespace std;

int main() {
    string input;
    int i = 0, jumlah = 0;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, input);
    while (i < input.length()) {
        // cek awal kata
        if (input[i] != ' ' && (i == 0 || input[i - 1] == ' ')) {
            jumlah++;
        }
        i++;
    }
    cout << "Jumlah judul buku: " << jumlah;
}