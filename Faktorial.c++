#include<iostream>
using namespace std;
int main(){
    int Number = 3;
    int hasil = 1;

    for(int i = 1; i<=Number; i++){
	hasil *= i;
	cout<<i<<endl ;

}
	cout<<"======================="<<endl;
	cout<<hasil<<endl;;

    return 0;
}

// Faktorial adalah bentuk mengalikan bilangan hingga angka tersebut sampai dengan 1
// contoh !3 = 3*2*1
// program diatas adalah menjelaskan bagaimana Program faktorial itu berkerja
// pertama lakukan looping apabila i masih kurang dari Number
// kemudian menjelankan hasil dikali dengan i hasil = 1 * i
// i didapat dari perulangan diatas mulai dari 1
// jadi 1*1 kemudian 1*2 hingga  i tidak boleh melebihi dari nilai number
// kemudian untuk cout hasil terakhir menampilkan hasil akhir dari program tersebut
