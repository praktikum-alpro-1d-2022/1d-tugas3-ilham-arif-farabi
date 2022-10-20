#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int		p, pp, a, b, c, d, angka1, angka2, angka3, angka4, v, r, i, x;
    float   e, f, g, h;
    


 cout<<"Luas bangun datar apa yang ingin anda hitung ?\n";
 cout<<"1. rumus pitagoras untuk menghitung sisi miring segitiga, jika diketahui sebuah segitiga siku-siku dengan panjang sisi alas 8cm dan sisi tinggi 10cm\n";
 cout<<"2. Menghitung nilai akhir matakuliah Algoritma dan Pemrograman, dengan syarat Praktikum(20%), UTS(30%), UAS(50%).\n";
 cout<<"3. Menghitung Arus(I), Tegangan(V), Hambatan(R)\n";
 cout<<"4. program untuk menyelesaikan rumus: Y = bx2 + 0,5x - c, dimana nilai b = 25, x=15, c=20\n";
 cout<<"5. Exit\n";
 cout<<"Pilih salah satu angka diatas : ";
 cin>>p;   
    if (p == 1)
  {
    a = 8; //alas
    b = 10; //tinggi
    c = (a*a) + (b*b); 
    e = sqrt(c);

	
	cout << "Alas :" << a << "cm \nTinggi :" << b << "cm \nMiring :" << e << "cm";
 } else if (p == 2)
  {
    cout << "Nilai Praktikumnya : 75\nNilai UTSnya : 70\nNilai UASnya : 88\n" ; 
    a = 75 * 20/100;
    b = 70 * 30/100;
    c = 88 * 50/100;
    e = a + b + c;
	cout << "Jumlah nilai akhirnya adalah " << e;
 } else if (p == 3)
  {
    cout << "Apa yang mau dihitung? \n1. Arus(I) \n2. Tegangan(V) \n3. Hambatan(R) \nPilih salah satu angka diatas :" ;
    cin >> p; 
    if (p == 1) {
        cout << "Berapa Tegangannya? " ;
        cin >> p; 
        cout << "Berapa Hambatannya? " ;
        cin >> pp;
        v = p;
        r = pp;
        e = v / r;
        cout << "Arusnya adalah " << e;
    } else if (p == 2) {
        cout << "Berapa Arusnya? " ;
        cin >> p; 
        cout << "Berapa Hambatannya? " ;
        cin >> pp;
        i = p;
        r = pp;
        e = i * r;
        cout << "Tegangannya adalah " << e;
    } else if (p == 3) {
        cout << "Berapa Arusnya? " ;
        cin >> p; 
        cout << "Berapa Tegangannya? " ;
        cin >> pp;
        i = p;
        v = pp;
        e = v / i;
        cout << "Hambatannya adalah " << e;
    } else {
        return 0;
    }
 } else if (p == 4)
  {
    b = 25; x = 15; c = 20;
    //
    //Y = bx2 + 0,5x – c
    e = b * x * x + 0.5 * x - c;
	cout << "Y = bx2 + 0,5x - c. jika b = 25, x = 15, c = 20, maka Y = " << e;
 } else {
    return 0;
 }
 return 0;
}