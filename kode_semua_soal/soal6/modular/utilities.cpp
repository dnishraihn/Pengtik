#include "utilities.h"

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
