#include <iostream>
#include <string>
using namespace std;

const int jumlahBarang = 3;

struct Barang {
    string nama;
    int hargaPerItem;
    int jumlahTerjual;
};

int main() {
    Barang dataBarang[jumlahBarang] = {{"Item 1", 5000}, {"Item 2", 6000}, {"Item 3", 15000}};
    int totalPenjualan = 0, maksJumlahTerjual = 0, barangTerlarisIndex = 0;

    for (int i = 0; i < jumlahBarang; ++i) {
        cout << "Jml terjual " << dataBarang[i].nama << ": ";
        cin >> dataBarang[i].jumlahTerjual;

        totalPenjualan += dataBarang[i].hargaPerItem * dataBarang[i].jumlahTerjual;

        if (dataBarang[i].jumlahTerjual > maksJumlahTerjual)
            maksJumlahTerjual = dataBarang[i].jumlahTerjual, barangTerlarisIndex = i;
    }

    cout << "Total penjualan: Rp." << totalPenjualan << "\nItem laku: " << dataBarang[barangTerlarisIndex].nama << endl;

    return 0;
}