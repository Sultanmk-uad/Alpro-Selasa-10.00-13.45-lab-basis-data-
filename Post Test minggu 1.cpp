#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string namaPelanggan, jenisBensin;
    double jumlahLiter, totalHarga;
    const double hargaPertalite = 7000, hargaPertamax = 9000;

    cout << "Masukkan nama pelanggan: ";
    getline(cin, namaPelanggan);

    cout << "Masukkan jenis bensin (pertalite/pertamax): ";
    cin >> jenisBensin;

    cout << "Masukkan jumlah liter: ";
    cin >> jumlahLiter;

    if (jenisBensin == "pertalite") {
        totalHarga = jumlahLiter * hargaPertalite;
    } else if (jenisBensin == "pertamax") {
        totalHarga = jumlahLiter * hargaPertamax;
    } else {
        cout << "Jenis bensin tidak valid." << endl;
        return 1; 
    }

    cout << "\n--- Struk Pembelian Bensin ---" << endl;
    cout << "Nama Pelanggan: " << namaPelanggan << endl;
    cout << "Jenis Bensin: " << jenisBensin << endl;
    cout << "Jumlah Liter: " << fixed << setprecision(2) << jumlahLiter << endl;
    cout << "Total Harga: Rp" << fixed << setprecision(0) << totalHarga << endl;
    cout << "-----------------------------" << endl;

    return 0;
}
