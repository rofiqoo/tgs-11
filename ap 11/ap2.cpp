#include <iostream>
using namespace std;

int main() {
    // Tabel kondisi daya dan biaya per Kwh
    int kondisiDaya[] = {900, 1300, 2200, 3500};
    double biayaPerKwh[] = {1350, 1440, 1450, 1500};

    // Daya listrik yang digunakan (misalnya, 2200 VA)
    int dayaListrik = 2200;

    // Menentukan indeks kondisi daya
    int indeksKondisiDaya = -1;
    for (int i = 0; i < sizeof(kondisiDaya) / sizeof(kondisiDaya[0]); ++i) {
        if (dayaListrik == kondisiDaya[i]) {
            indeksKondisiDaya = i;
            break;
        }
    }

    // Rincian penggunaan listrik harian (dalam watt-hour)
    double penggunaanAC = 800;
    double penggunaanKulkas = 200;
    double penggunaanStrika = 150;
    double penggunaanMesinCuci = 250;
    double penggunaanLampu = 250;
    double penggunaanLainnya = 100;

    // Menghitung total penggunaan listrik harian
    double totalPenggunaanHarian = penggunaanAC + penggunaanKulkas + penggunaanStrika + penggunaanMesinCuci + penggunaanLampu + penggunaanLainnya;

    // Menghitung total biaya listrik per hari
    double totalBiayaHarian = totalPenggunaanHarian / 1000 * biayaPerKwh[indeksKondisiDaya];

    // Menghitung total biaya listrik per bulan (anggap 30 hari)
    double totalBiayaBulanan = totalBiayaHarian * 30;

    cout << "Biaya listrik per bulan: Rp. " << totalBiayaBulanan << endl;

    return 0;
}