#include<iostream>
#include<string>
using namespace std;


//parent class
class Kendaraan {
	protected : 
		string merk_kendaraan , jenis_bahan_bakar;
		int nomor_seri;
	
	void setKendaraan() {
		merk_kendaraan = "Honda";
		nomor_seri = 80808070;
		jenis_bahan_bakar = "Bensin";
	}
	
};

//child class
class MobilSedan:public Kendaraan {
	private : 
		string nama_mobil;
		int jumlah_kursi;
		string warna_mobil;
		string jenis_kendaraan;
		string jenis_transmisi;
	
	public : 
		void setMobilSedan() {
			nama_mobil = "CR-V";
			jumlah_kursi = 7;
			warna_mobil = "Putih Metalik";
			jenis_kendaraan = "Sedan Roda 4";
			jenis_transmisi = "Manual";
			setKendaraan();
	}
	
		void showInfoMobilSedan() {
			cout<<"Contoh jenis Mobil Sedan"<<endl;
			cout<<"------------------------"<<endl;
			cout<<endl;
			cout<<"Nama mobil sedan   : "<<nama_mobil<<endl;
			cout<<"Jumlah kursi mobil : "<<jumlah_kursi<<endl;
			cout<<"Warna kendaraan    : "<<warna_mobil<<endl;
			cout<<"Jenis kendaraan    : "<<jenis_kendaraan<<endl;
			cout<<"Jenis transmisi    : "<<jenis_transmisi<<endl;
			cout<<"---------------------------------------------"<<endl;
			cout<<"Informasi tambahan : "<<endl;
			cout<<"Merk kendaraan     : "<<merk_kendaraan<<endl;
			cout<<"Nomor seri merk    : "<<nomor_seri<<endl;
			cout<<"Jenis bahan bakar  : "<<jenis_bahan_bakar<<endl;
			cout<<"---------------------------------------------"<<endl;
		
	}
}mobilsedan;

//child class2
class SepedaMotor:public Kendaraan {
	private : 
		string nama_motor;
		int jumlah_suspensi;
		string warna_motor;
		string jenis_kendaraan;
		string jenis_transmisi;
	
	public : 
	
		void setSepedaMotor() {
			nama_motor = "Vario 150";
			jumlah_suspensi = 1;
			warna_motor = "Abu - abu metalik";
			jenis_kendaraan = "Sepeda Motor Roda 2";
			jenis_transmisi = "Otomatis / Matic";
			setKendaraan();
		}
	
		void showInfoSepedaMotor() {
			cout<<"Contoh jenis Sepeda Motor"<<endl;
			cout<<"-------------------------"<<endl;
			cout<<endl;
			cout<<"Nama sepeda motor  : "<<nama_motor<<endl;
			cout<<"Jumlah suspensi    : "<<jumlah_suspensi<<endl;
			cout<<"Warna kendaraan    : "<<warna_motor<<endl;
			cout<<"Jenis kendaraan    : "<<jenis_kendaraan<<endl;
			cout<<"Jenis transmisi    : "<<jenis_transmisi<<endl;
			cout<<"---------------------------------------------"<<endl;
			cout<<"Informasi tambahan : "<<endl;
			cout<<"Merk kendaraan     : "<<merk_kendaraan<<endl;
			cout<<"Nomor seri         : "<<nomor_seri<<endl;
			cout<<"Jenis bahan bakar  : "<<jenis_bahan_bakar<<endl;
			cout<<"---------------------------------------------"<<endl;
		}
	
}spdmotor;


int main() {
	
	MobilSedan mobilsedan;
	mobilsedan.setMobilSedan();
	mobilsedan.showInfoMobilSedan();
	cout<<endl;
	SepedaMotor spdmotor;
	spdmotor.setSepedaMotor();
	spdmotor.showInfoSepedaMotor();
	
	return 0;
}
