#include <iostream>
using namespace std;

int main (){
	cout<<"Konversi Suhu dari Celcius ke Fahrenheit , Reaumur dan Kelvin"<<endl;
	float c,f,r,k;
	cout<<"Masukkan suhu (Celcius) = ";
	cin>>c;
	k=c+273.15;
	f=(c*1.8)+32;
	r=c*0.8;
	cout<<"------------------------------------"<<endl;
	cout<<"Hasil Konversi Suhu dari Celsius ke:"<<endl;
	cout<<"Kelvin     : "<<k<<endl;
	cout<<"Fahrenheit : "<<f<<endl;
	cout<<"Reaumur    : "<<r<<endl;
	
	return 0;
}
