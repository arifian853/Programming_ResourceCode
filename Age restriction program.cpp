#include <iostream>
#include <string>
using namespace std;

int main () {
	int umur;
	cout<<"Bioskop Indo Cinema XXL"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukkan umur anda : ";
	cin>>umur;
	
	if (umur >= 18) {
		cout<<"------------------------"<<endl;
		cout<<"Silakan masuk :) ";
}
	else {
		cout<<"Anda tidak diperkenankan menonton film ini";
	}
	return 0;
}


