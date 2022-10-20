#include <iostream>
#include <math.h>
using namespace std;
// Menghitung sisi miring phytagoras
int main(){
    int a = 8, b = 10;
    double c;

    cout << "Alas: " << a << endl;
    cout << "Tinggi: " << b << endl;

    c= sqrt(a*a + b*b);

    cout << "Sisi Miring: " << c;

    return 0;
}
