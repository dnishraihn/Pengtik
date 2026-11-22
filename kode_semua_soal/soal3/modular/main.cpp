#include <iostream>
#include "prima.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;                       // jumlah pertanyaan
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        cout << n << ": " << (adalah_prima(n) ? "true" : "false") << "\n";
    }
    return 0;
}
