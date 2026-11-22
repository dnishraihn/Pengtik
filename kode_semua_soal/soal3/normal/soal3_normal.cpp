#include <iostream>
using namespace std;

bool adalah_prima(int n) {
    if (n < 2) return false;          // 0, 1, dan negatif bukan prima
    if (n < 4) return true;           // 2 dan 3 prima
    if (n % 2 == 0) return false;     // genap > 2 bukan prima
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;
    cout << n << (adalah_prima(n) ? " adalah bilangan prima\n"
                                  : " bukan bilangan prima\n");
    return 0;
}
