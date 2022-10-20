#include <iostream>
using namespace std;
// Menghitung arus, tegangan, hambatan
int main(){
    int pilihAngka;
    double I, V, R;

    cout << "Pilih rumus yang ingin dicari: " << endl;
    cout << "1. Arus Listrik(I)" << endl;
    cout << "2. Tegangan Listrik(V)" << endl;
    cout << "3. Hambatan Listrik(R)" << endl;
    cout << "Pilihan rumus dalam angka: ";
    cin >> pilihAngka;

    if (pilihAngka==1){
        cout << "Masukkan Tegangan Listrik (V): ";
        cin >> V;
        cout << "Masukkan Hambatan Listrik (R): ";
        cin >> R;

        I = V/R;
        cout << "Arus Listrik (I): " << I << endl;

    } else if (pilihAngka==2){
        cout << "Masukkan Arus Listrik (I): ";
        cin >> I;
        cout << "Masukkan Hambatan Listrik (R): ";
        cin >> R;

        V = I*R;
        cout << "Tegangan Listrik (V): " << V << endl;

    } else if (pilihAngka==3){
        cout << "Masukkan Tegangan Listrik (V): ";
        cin >> V;
        cout << "Masukkan Arus Listrik (I): ";
        cin >> I;

        R = V/I;
        cout << "Hambatan Listrik (R): " << R << endl;

    } else if (pilihAngka!=1, 2, 3)
        cout << "Masukkan Hanya Angka 1-3!!";

    return 0;
}
