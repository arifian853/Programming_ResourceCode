#include <iostream>
using namespace std;
//Matriks 1 Dimensi
int main() {
	int i[]={1,3,5,4,7,2,99,16,45,67,89,45};
	int x,ukuran;
	cout<<"Terdapat sebuah Array(Larik) seperti berikut :"<<endl;
	cout<<endl;
	cout<<"1,3,5,4,7,2,99,16,45,67,89,45"<<endl;
	cout<<endl;
	cout<<"Bentuk larik dalam matriks 1 dimensi : "<<endl;
	cout<<i[0];
	cout<<" ";
	cout<<i[1];
	cout<<" ";
	cout<<i[2];
	cout<<" ";
	cout<<i[3];
	cout<<" ";
	cout<<i[4];
	cout<<" ";
	cout<<i[5];
	cout<<" ";
	cout<<i[6];
	cout<<" ";
	cout<<i[7];
	cout<<" ";
	cout<<i[8];
	cout<<" ";
	cout<<i[9];
	cout<<" ";
	cout<<i[10];
	cout<<" ";
	cout<<i[11];
	cout<<" ";
	cout<<endl;
	ukuran = sizeof(i)/sizeof(i[0]);
	cout<<"Sehingga jumlah larik ialah = "<<ukuran<<endl;

	return 0;
}
