#include "tukar.h"

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void tukar_tanpa_ref(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
