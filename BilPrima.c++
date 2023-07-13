#include <iostream>
using namespace std;
int main() {
    int number;
    bool isPrime = true;

    cout << "Masukkan bilangan: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
		// fungsi i di kali i
        for (int i = 2; i*i <= number; i++) {
			// pengecekan 
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " adalah bilangan prima." << endl;
    } else {
        cout << number << " bukan bilangan prima." << endl;
    }

    return 0;
}

// NOTE
// Apabila saya masukan angka 9
// Bilangan tersebut akan masuk kedalam looping
// If pertama untuk mengecek apakah bilangan tersebut sama dengan 1 atau kurang dari 1
// apabila lolos
// program tersebut akan melakukan looping 
// fungsi i * i untuk melakukan pefaktoran misalnya 2*2 <=number atau 4<=number number disini adalah 9

// if kedua untuk mengecek apakah dari sisa bagi number dengan i akan menghasilkan 0 atau 1
// apabila masih meninggal sisa bagi 1 maka program akan diulang kembali dengan menambahkan i + 1
// jadi 3*3 = number atau 9<=number disini 9<=9 
// lakukan cek kembali apakah menghasilkan sisa bagi 0 maka program akan berhenti dan mengecek bahwa angka 9 ini bukan bil prima

// apabila saya masukan angka 11
// pengecekan pertama bahwa 11 masih memili sisi bagi 1 dengan bilangan 2 (number % i) atau (11%2=1)
// pengecekan kedua bahwa 11 masih memiliki sisa bagi 2 dengan bilangan 3 (number % i) atau (11%3=2)
// untuk pengecekan ketiga tidak bisa dilakukan karena pemfaktoran 4*4 adalah 16 sedangkan nilai dari number adalah 11 
// sedangkan untuk looping hanya diperbolehkan kurang dari 11 atau sama dengan 11
// maka bilangan 11 merupakan bilangan prima


