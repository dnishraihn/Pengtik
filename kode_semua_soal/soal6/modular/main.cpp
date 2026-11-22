#include <iostream>
#include <iomanip>
#include "utilities.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);

    // Fungsi 1
    double c;
    cout << "Suhu Celsius: ";
    cin >> c;
    cout << c << " C = " << celsius_ke_fahrenheit(c) << " F\n\n";

    // Fungsi 2
    int x, y;
    cout << "Masukkan x dan y: ";
    cin >> x >> y;
    tukar(x, y);
    cout << "Setelah tukar: x=" << x << " y=" << y << "\n\n";

    // Fungsi 3
    int n;
    cout << "Masukkan n: ";
    cin >> n;
    cout << n << (adalah_prima(n) ? " adalah prima\n" : " bukan prima\n");
    return 0;
}
