#include <iostream>
using namespace std;

// Program rekursif nilai N faktorial 
//Arifian Saputra , Teknik Informatika 1 , Universitas Maritim Raja Ali Haji
long int faktorial (int A);
int main (){
	int n,hasil;
	
	cout<<"MENGHITUNG NILAI N FAKTORIAL DENGAN REKURSIF"<<endl;
	cout<<endl;
	cout<<"Masukan Nilai = ";
	cin>>n;
	
	hasil=faktorial(n);
	cout<<"Faktorial "<<n<<"!= "<<hasil<<endl;
}

long int faktorial (int A){
	if (A==1)
		return(A);
		else
		return (A*faktorial(A-1));
}
