#include <iostream>   // Library standar untuk input dan output (cin, cout)
#include <string>     // Library untuk menggunakan tipe data string
using namespace std;  // Agar bisa menggunakan nama standar (seperti cout, cin) tanpa menulis std::

int main() {
    int Obat;  // Variabel untuk menyimpan jumlah obat yang akan diinput

    cout << "Masukan jumlah obat: ";  // Menampilkan pesan ke layar
    cin >> Obat;                      // Membaca input jumlah obat dari pengguna
    cin.ignore();                     // Menghapus karakter newline (\n) dari buffer agar getline tidak terlewati

    string data[Obat][3];  // Deklarasi array 2 dimensi bertipe string untuk menyimpan data obat
                           // Baris = jumlah obat, Kolom = 3 (Nama, Stok, Harga)

    // Perulangan untuk menginput data obat satu per satu
    for (int i = 0; i < Obat; i++) {
        cout << "\nObat ke-" << i + 1 << endl;  // Menampilkan nomor obat yang sedang diinput

        cout << "Nama obat: ";        // Minta input nama obat
        getline(cin, data[i][0]);     // Simpan ke kolom pertama (nama obat)

        cout << "Stok   : ";          // Minta input stok
        getline(cin, data[i][1]);     // Simpan ke kolom kedua (stok)

        cout << "Harga  : ";          // Minta input harga
        getline(cin, data[i][2]);     // Simpan ke kolom ketiga (harga)
    }

    // Menampilkan tabel hasil input
    cout << "\n=================================================" << endl;
    cout << "Nama Obat\tStok\tHarga" << endl;  // Header tabel
    cout << "===================================================" << endl;

    // Perulangan untuk menampilkan semua data yang sudah diinput
    for (int i = 0; i < Obat; i++) {
        cout << data[i][0] << "\t"      // Menampilkan nama obat
             << data[i][1] << "\t"      // Menampilkan stok obat
             << data[i][2] << endl;     // Menampilkan harga obat
    }

    return 0;  // Mengakhiri program dengan nilai 0 (tanda program berhasil)
}
