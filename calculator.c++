#include<iostream>
using namespace std;

int main(){
	string Operator;
	int InpPertama,IntKedua,Hasil;

	cout<<"Masukan Angka Pertama= ";
	cin>>InpPertama;
	cout<<"Masukkan Angka Kedua =";
	cin>>IntKedua;
	
	cout<<"Pilih Operator yang Ingin anda gunakan (+,-,*,/) = ";
	cin>>Operator;

	if (Operator=="+"){
		Hasil= InpPertama + IntKedua;
		cout<<"Hasil dari Penjumlahan bilangan tersebut adalah "<<Hasil;
	}else if(Operator=="-"){
		Hasil= InpPertama - IntKedua;
		cout<<"Hasil dari Pengurangan bilangan tersebut adalah "<<Hasil;
	}else if(Operator=="*"){
		Hasil= InpPertama * IntKedua;
		cout<<"Hasil dari Perkalian bilangan tersebut adalah "<<Hasil;
	}else if(Operator=="/"){
		Hasil= InpPertama / IntKedua;
		cout<<"Hasil dari Pembagian bilangan tersebut adalah "<<Hasil;
	}else{
		cout<<"Operator tidak tersedia";
	}
	
	
 return 0;
}