#include <iostream>
using namespace std;

// Dengan & : a dan b adalah ALIAS dari variabel asli
void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Tanpa & : a dan b hanyalah SALINAN
void tukar_tanpa_ref(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Awal            : x=" << x << " y=" << y << "\n";

    tukar_tanpa_ref(x, y);
    cout << "Tanpa &         : x=" << x << " y=" << y << "  (tidak berubah)\n";

    tukar(x, y);
    cout << "Dengan &        : x=" << x << " y=" << y << "  (tertukar)\n";
    return 0;
}
