#ifndef KASIR_H
#define KASIR_H

#include <string>
#include <vector>

struct Item {
    std::string nama;
    long long harga;
    int jumlah;
};

std::vector<Item> baca_belanja();
long long hitung_total(const std::vector<Item> &daftar);
long long hitung_diskon(long long total);
void cetak_struk(const std::vector<Item> &daftar, long long total, long long diskon);

#endif
