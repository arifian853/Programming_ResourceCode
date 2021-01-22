#include <iostream>
using namespace std;
double hasil (int A, int B);
int x,y;
double z;

// Modul 7C
//Arifian Saputra , Teknik Informatika 1 , Universitas Maritim Raja Ali Haji

int main () {
	
	/* fungsi untuk memasukkan dua argumen integer dan menghasikan perkalian
bilangan pertama dengan bilangan kedua. Fungsi tidak melakukan perkalian apabila terdapat 
nilai 0 tapi mencetak hasilnya 0. Panggil fungsi tersebut untuk dieksekusi.*/

	cout<<"Nilai variabel x = ";
	cin>>x;
	cout<<"Nilai variabel y = ";
	cin>>y;
	z = hasil (x,y);
		if(x == 0){
		cout << "0" << endl;
	}else if(y == 0){
		cout << "0" << endl;
	}else {
		cout << "Hasil perkalian dua variabel yang di input ="<<endl;
		cout << x << " x " << y << " = " << z;
	}
} 
double hasil (int A, int B){
	return (A * B); 
}
