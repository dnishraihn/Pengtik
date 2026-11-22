#include <iostream>
#include "tukar.h"
using namespace std;

int main() {
    int x, y;
    cout << "Masukkan x dan y: ";
    cin >> x >> y;

    tukar_tanpa_ref(x, y);
    cout << "Tanpa &  : x=" << x << " y=" << y << "\n";

    tukar(x, y);
    cout << "Dengan & : x=" << x << " y=" << y << "\n";
    return 0;
}
