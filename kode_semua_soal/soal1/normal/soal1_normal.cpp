#include <iostream>
#include <iomanip>
using namespace std;

double celsius_ke_fahrenheit(double c) {
    return 9.0 / 5.0 * c + 32.0;
}

int main() {
    double c;
    cout << "Masukkan suhu (Celsius): ";
    cin >> c;

    cout << fixed << setprecision(2);
    cout << c << " C = " << celsius_ke_fahrenheit(c) << " F\n";
    return 0;
}
