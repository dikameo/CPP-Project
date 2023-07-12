// Versi Chat GPT
#include<iostream>
using namespace std;

double konversiSuhu(double suhu, int pilAsal, int pilTujuan) {
    double hasil = 0.0;

    if (pilAsal == pilTujuan) {
        hasil = suhu;
    } else if (pilAsal == 1) {  // Celcius
        if (pilTujuan == 2) {
            hasil = (9.0/5.0 * suhu) + 32;  // Celcius ke Fahrenheit
        } else if (pilTujuan == 3) {
            hasil = (4.0/5.0 * suhu);  // Celcius ke Reamur
        } else if (pilTujuan == 4) {
            hasil = suhu + 273;  // Celcius ke Kelvin
        }
    } else if (pilAsal == 2) {  // Fahrenheit
        if (pilTujuan == 1) {
            hasil = 5.0/9.0 * (suhu - 32);  // Fahrenheit ke Celcius
        } else if (pilTujuan == 3) {
            hasil = 4.0/9.0 * (suhu - 32);  // Fahrenheit ke Reamur
        }
    } else if (pilAsal == 3) {  // Reamur
        if (pilTujuan == 1) {
            hasil = 5.0/4.0 * suhu;  // Reamur ke Celcius
        } else if (pilTujuan == 2) {
            hasil = (9.0/4.0 * suhu) + 32;  // Reamur ke Fahrenheit
        } else if (pilTujuan == 4) {
            hasil = (5.0/4.0 * suhu) + 273;  // Reamur ke Kelvin
        }
    } else if (pilAsal == 4) {  // Kelvin
        if (pilTujuan == 1) {
            hasil = suhu - 273;  // Kelvin ke Celcius
        } else if (pilTujuan == 3) {
            hasil = (4.0/5.0 * suhu) - 273;  // Kelvin ke Reamur
        }
    }

    return hasil;
}

int main() {
    int pilPertama, pilKedua;
    double suhuMasukan, hasilKonversi;
    
    cout << "Pilih kategori suhu yang ingin Anda konversikan" << endl;
    cout << "1. Celcius\n2. Fahrenheit\n3. Reamur\n4. Kelvin\n";
    cout << "Pilihan suhu Anda dari = ";
    cin >> pilPertama;

    cout << "Masukkan suhu yang ingin Anda konversikan = ";
    cin >> suhuMasukan;

    cout << "Pilihan suhu Anda diubah ke = ";
    cin >> pilKedua;

    hasilKonversi = konversiSuhu(suhuMasukan, pilPertama, pilKedua);
    cout << "Hasil konversi suhu adalah " << hasilKonversi << endl;

    return 0;
}
