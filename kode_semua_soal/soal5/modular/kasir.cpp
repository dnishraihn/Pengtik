#include "kasir.h"
#include <iostream>
#include <iomanip>
using namespace std;

vector<Item> baca_belanja() {
    int n;
    cout << "Jumlah jenis barang: ";
    cin >> n;

    vector<Item> daftar(n);
    for (int i = 0; i < n; i++) {
        cout << "\nBarang ke-" << i + 1 << "\n";
        cout << "  Nama   : ";
        cin >> ws;
        getline(cin, daftar[i].nama);
        cout << "  Harga  : ";
        cin >> daftar[i].harga;
        cout << "  Jumlah : ";
        cin >> daftar[i].jumlah;
    }
    return daftar;
}

long long hitung_total(const vector<Item> &daftar) {
    long long total = 0;
    for (const Item &it : daftar) total += it.harga * it.jumlah;
    return total;
}

long long hitung_diskon(long long total) {
    int persen = 0;
    if (total >= 500000)      persen = 15;
    else if (total >= 200000) persen = 10;
    else if (total >= 100000) persen = 5;
    return total * persen / 100;
}

void cetak_struk(const vector<Item> &daftar, long long total, long long diskon) {
    cout << "\n=========== STRUK BELANJA ===========\n";
    for (const Item &it : daftar) {
        cout << left << setw(15) << it.nama
             << right << setw(3) << it.jumlah << " x "
             << setw(9) << it.harga << " = "
             << setw(10) << it.harga * it.jumlah << "\n";
    }
    cout << "-------------------------------------\n";
    cout << left << setw(25) << "Total"  << right << setw(12) << total << "\n";
    cout << left << setw(25) << "Diskon" << right << setw(12) << diskon << "\n";
    cout << left << setw(25) << "BAYAR"  << right << setw(12) << total - diskon << "\n";
    cout << "=====================================\n";
}
