#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    string matkul[3] = {
        "Algoritma dan Pemrograman",
        "Probabilitas dan Statistika",
        "Sistem Operasi"
    };
    int nilai[3], total = 0;
    cout << "Nama Mahasiswa : ";
    getline(cin, nama);

    cout << "NIM : ";
    getline(cin, nim);

    cout << "Nilai Mata Kuliah :" << endl;
    for (int i = 0; i < 3; i++) {
        cout << matkul[i] << " : ";
        cin >> nilai[i];
        total += nilai[i];
    }
    for (int i = 0; i < 3; i++) {
        cout << matkul[i] << " : ";

        if (nilai[i] >= 60) {
            cout << "Lulus";
        } else {
            if (i == 2)
                cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
            else
                cout << "Tidak Lulus";
        }
        cout << endl;
    }
    cout << "Nilai Rata-rata Semester ini : "
    << total / 3;
}