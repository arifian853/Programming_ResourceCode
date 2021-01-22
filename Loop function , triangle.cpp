#include <iostream>
using namespace std;

int main (){
	int n,x,y,z;
	
	
	cout<<"Masukkan nilai tinggi segitiga = ";
	cin>>n;
	//Pola 1
	cout<<"Pola 1";
	cout<<endl;
	 for (x=1; x<=n; x++)
	 {
	 	for (y=1; y<=x; y++)
	 	cout<<"*";
	 	cout<<endl;
	 }
	//Akhir dari Pola 1 , lanjut ke Pola 2
	
	//Pola 2
	 cout<<"Pola 2";
	 cout<<endl;
	  for (x=1; x<=n; x++)
	  {
	  	for (y=n; y>=x; y--)
		 
	  	cout<<"*";
	  	cout<<endl;
	  }
	//Akhir dari Pola 2 , lanjut ke Pola 3
	
	//Pola 3
	cout<<"Pola 3 : Segitiga sama kaki";
	cout<<endl;
	  for (x=1; x<=n; x++)
	  {
	  	for (y=n; y>x; y--)
	  	cout<<" ";
	  	for (z=1; z<=(2 * x - 1); z++)
	  	cout<<"*";
	  	cout<<endl;
	  }
	//Akhir dari Pola 3
}
