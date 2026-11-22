#include <iostream>
#include <iomanip>
using namespace std;

double celsius_ke_fahrenheit(double c) {
    return 9.0 / 5.0 * c + 32.0;
}

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

bool adalah_prima(int n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << fixed << setprecision(2);

    // Fungsi 1
    double c = 37.0;
    cout << c << " C = " << celsius_ke_fahrenheit(c) << " F\n";

    // Fungsi 2
    int x = 5, y = 10;
    cout << "Sebelum tukar: x=" << x << " y=" << y << "\n";
    tukar(x, y);
    cout << "Sesudah tukar: x=" << x << " y=" << y << "\n";

    // Fungsi 3
    int n = 97;
    cout << n << (adalah_prima(n) ? " prima\n" : " bukan prima\n");
    return 0;
}
