#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main () {
	cout<<"Program 1 = Program Array yang menunjukkan nama - nama negara."<<endl;
	
	string negara [6]={"Malaysia","Brunei","Indonesia","Filipina","Singapura","Birma"};
	int elemen;
	for (elemen=0; elemen<=5; elemen++ ) {
		cout<<"Negara : "<<elemen[negara]<<endl;
	}
		cout<<"---------------------------------"<<endl;
		cout<<"Negara pada index 0 = "<<negara[0]<<endl;
		cout<<"Negara pada index 1 = "<<negara[1]<<endl;
		cout<<"Negara pada index 2 = "<<negara[2]<<endl;
		cout<<"Negara pada index 3 = "<<negara[3]<<endl;
		cout<<"Negara pada index 4 = "<<negara[4]<<endl;
		cout<<"Negara pada index 5 = "<<negara[5]<<endl;
		cout<<"---------------------------------"<<endl;
		cout<<"Program 2 = Program untuk menampilkan secara individu pada index ke 3 dari program no 1."<<endl;
		cout<<"Negara pada index ke 3 : "<<negara[3]<<endl;
	return 0;
}
