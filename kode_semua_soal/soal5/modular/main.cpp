#include "kasir.h"

int main() {
    std::vector<Item> daftar = baca_belanja();
    long long total  = hitung_total(daftar);
    long long diskon = hitung_diskon(total);
    cetak_struk(daftar, total, diskon);
    return 0;
}
