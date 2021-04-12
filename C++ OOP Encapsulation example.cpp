#include<iostream>

using namespace std;

class Mahasiswa{

	private :
		char nim[20];
		char nama[25];
		char alamat[25];
		int noHP ;
		char ttl[20];
		char sks[20];
	
	public : 
		
		void SetNilai(){
			cout << "=== Input angka dalam satuan meter/km=== " << endl;
			cout << "Meter (m) ke centimeter (cm)       : "; cin >>nim;
			cout << "Meter (m) ke kilometer (km)        : "; cin >>nama;
			cout << "Kilometer (km) ke meter (m)        : "; cin >>alamat;
			cout << "Kilometer (km) ke centimeter (cm)  : "; cin >>noHP;
			cout << "Kilometer (km) ke centimeter (cm)  : "; cin >>ttl;
			cout << "Kilometer (km) ke centimeter (cm)  : "; cin >>sks;
		}
		
		void ShowHasil(){
			cout << "=== Input angka dalam satuan meter/km=== " << endl;
			cout << "Meter (m) ke centimeter (cm)       : "<<nim<<endl;
			cout << "Meter (m) ke centimeter (cm)       : "<<nama<<endl;
			cout << "Meter (m) ke centimeter (cm)       : "<<alamat<<endl;
			cout << "Meter (m) ke centimeter (cm)       : "<<noHP<<endl;
			cout << "Meter (m) ke centimeter (cm)       : "<<ttl<<endl;
			cout << "Meter (m) ke centimeter (cm)       : "<<sks<<endl;
		}
		
}hitung;

int main(){	
	hitung.SetNilai();
	
	hitung.ShowHasil();

}

