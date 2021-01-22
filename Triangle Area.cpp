#include <iostream>
using namespace std;

// Modul 7B 
//Arifian Saputra , Teknik Informatika 1 , Universitas Maritim Raja Ali Haji

int main() {
	int x,y,z;
		//x = hasil , y = alas , z = tinggi 
	cout<<"Fungsi luas segitiga"<<endl;
	//nilai alas
	cout<<"Masukkan nilai alas = ";
	cin>>y;
	//nilai tinggi
	cout<<"Masukkan nilai tinggi = ";
	cin>>z;
	//rumus
	x = y * z / 2;	
	//hasil
	cout<<"Luas segitiga = "<<x<<" cm"<<endl;
	
	return 0;
}
