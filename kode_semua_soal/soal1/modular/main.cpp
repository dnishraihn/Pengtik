#include <iostream>
#include <iomanip>
#include "suhu.h"
using namespace std;

int main() {
    double c;
    cout << "Masukkan suhu (Celsius): ";
    cin >> c;

    cout << fixed << setprecision(2);
    cout << c << " C = " << celsius_ke_fahrenheit(c) << " F\n";
    return 0;
}
