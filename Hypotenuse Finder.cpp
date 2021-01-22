#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main () {
	cout<<"Menentukan sisi miring segitiga siku-siku"<<endl;
	cout<<"-------------------------------------------"<<endl;
	float a,b,c;
	cout<<"Masukan nilai tinggi =";
	cin>>a;
	cout<<"Masukkan nilai alas =";
	cin>>b;
	c = sqrt((a*a)+(b*b));
	cout <<" ---------------------------" <<endl;
	cout <<" Hasilnya adalah : " << c <<endl;
	getch();
	
	return 0;
}
