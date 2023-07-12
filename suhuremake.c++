#include<iostream>
using namespace std;
int main(){
    int Celcius, Fahrenheit, Reamur, Kelvin, Hasil,PilPertama,PilKedua,Inp1,Inp2;
    string HasilPil1, HasilPil2;

    cout<<"Pilih kategori suhu yang anda ingin konversikan"<<endl;
    cout<<"Pilih antara\n 1.Celcius\n 2.Fahrenheit\n 3.Reamur\n 4.Kelvin)\n";
    cout<<"Pilihan suhu anda dari = ";
    cin>>PilPertama;
    switch (PilPertama)
    {
    case 1:
        cout<<"Masukan suhu Celcius yang ingin anda Masukan = ";
        cin>>Inp1;
        HasilPil1 = "Cel";
        break;
    case 2:
        cout<<"Masukan suhu Fahrenheit yang ingin anda Masukan = ";
        cin>>Inp1;
        HasilPil1 = "Fah";
        break;
    case 3:
        cout<<"Masukan suhu Reamur yang ingin anda Masukan  = ";
        cin>>Inp1;
        HasilPil1 = "Rea";
        break;
    case 4:
        cout<<"Masukan suhu Kelvin yang ingin anda Masukan = ";
        cin>>Inp1;
        HasilPil1 = "Kel";
        break;
    
    default:
        break;
    }

    cout<<"Pilih antara 1.Celcius\n 2.Fahrenheit\n 3.Reamur\n 4.Kelvin\n)";
    cout<<"Pilihan suhu anda diubah Ke = ";
    cin>>PilKedua;
    switch (PilKedua)
    {
    case 1:
        HasilPil2 = "Cel";
        break;
    case 2:
        HasilPil2 = "Fah";
        break;
    case 3:
        HasilPil2 = "Rea";
        break;
    case 4:
        HasilPil2 = "Kel";
        break;
    
    default:
        break;
    }

    // Konversi Celcius
    if(HasilPil1=="Cel"&&HasilPil2=="Cel"){
        Hasil=Inp1;
        cout<<"Hasil dari Konversi Celcius ke Celcius Adalah "<<Hasil;
    }else if(HasilPil1=="Cel"&&HasilPil2=="Fah"){
        Hasil = (9.0/5.0*Inp1)+32;
        cout<<"Hasil dari Konversi Celcius ke Fahrenheit Adalah "<<Hasil;
    }else if(HasilPil1=="Cel"&&HasilPil2=="Rea"){
        Hasil = (4.0/5.0*Inp1);
        cout<<"Hasil dari Konversi Celcius ke Reamur Adalah "<<Hasil;
    }else if(HasilPil1=="Cel"&&HasilPil2=="Kel"){
        Hasil = (Inp1+273);
        cout<<"Hasil dari Konversi Celcius ke Kelvin Adalah "<<Hasil;
    }

    // Konversi Fahrenheit
    if(HasilPil1=="Fah"&&HasilPil2=="Fah"){
        Hasil=Inp1;
        cout<<"Hasil dari Konversi Fahrenheit ke Fahrenheit Adalah "<<Hasil;
    }else if(HasilPil1=="Fah"&&HasilPil2=="Cel"){
        Hasil = 5.0/9.0*(Inp1-32);
        cout<<"Hasil dari Konversi Fahrenheit ke Celcius Adalah "<<Hasil;
    }else if(HasilPil1=="Fah"&&HasilPil2=="Rea"){
        Hasil = 4.0/9.0*(Inp1-32);
        cout<<"Hasil dari Konversi Fahrenheit ke Reamur Adalah "<<Hasil;
    }else if(HasilPil1=="Fah"&&HasilPil2=="Kel"){
        cout<<"Tidak bisa melakukan Perhitungan "<<Hasil;
    }

    // Konversi Reamur
    if(HasilPil1=="Rea"&&HasilPil2=="Rea"){
        Hasil=Inp1;
        cout<<"Hasil dari Konversi Reamur ke Reamur Adalah "<<Hasil;
    }else if(HasilPil1=="Rea"&&HasilPil2=="Cel"){
        Hasil = 5.0/4.0*(Inp1);
        cout<<"Hasil dari Konversi Reamur ke Celcius Adalah "<<Hasil;
    }else if(HasilPil1=="Rea"&&HasilPil2=="Rea"){
        Hasil = (9.0/4.0*Inp1)+32;
        cout<<"Hasil dari Konversi Reamur ke Fahrenheit Adalah "<<Hasil;
    }else if(HasilPil1=="Rea"&&HasilPil2=="Kel"){
         Hasil = (5.0/4.0*Inp1)+273;
        cout<<"Hasil dari Konversi Reamur ke Kelvin Adalah "<<Hasil;
    }

    // Konversi Kelvin
    if(HasilPil1=="Kel"&&HasilPil2=="Kel"){
        Hasil=Inp1;
        cout<<"Hasil dari Konversi Kelvin ke Kelvin Adalah "<<Hasil;
    }else if(HasilPil1=="Kel"&&HasilPil2=="Cel"){
        Hasil = Inp1-273;
        cout<<"Hasil dari Konversi Kelvin ke Celcius Adalah "<<Hasil;
    }else if(HasilPil1=="Kel"&&HasilPil2=="Rea"){
        Hasil = (4.0/5.0*Inp1)-273;
        cout<<"Hasil dari Konversi Kelvin ke Reamur Adalah "<<Hasil;
    }else if(HasilPil1=="Kel"&&HasilPil2=="Fah"){
        cout<<"Tidak bisa melakukan Perhitungan "<<Hasil;
    }
}