#include <iostream>
using namespace std;
// Menghitung nilai akhir Alpro Mahasiswa
int main(){
    int praktikum = 75, UTS = 70, UAS = 88;
    double nilaiAkhirPraktikum, nilaiAkhirUTS, nilaiAkhirUAS, jumlahNilaiAkhir;

    nilaiAkhirPraktikum = praktikum*0.2;
    nilaiAkhirUTS = UTS*0.3;
    nilaiAkhirUAS = UAS*0.5;
    jumlahNilaiAkhir = nilaiAkhirPraktikum+nilaiAkhirUTS+nilaiAkhirUAS;

    cout << "Nilai Akhir Praktikum: " << nilaiAkhirPraktikum << endl;
    cout << "Nilai Akhir UTS: " << nilaiAkhirUTS << endl;
    cout << "Nilai Akhir UAS: " << nilaiAkhirUAS << endl;
    cout << "Jumlah Nilai Akhir: " << jumlahNilaiAkhir;

    return 0;
}
