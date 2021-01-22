#include <iostream>
using namespace std;
//Array 2 Dimensi untuk menginputkan matriks ordo 3x4
int main(){
	int A[3][4]={{11,22,34,64},{12,23,45,32},{21,67,33,25}};
	
	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			cout<<A[b][k]<<" ";
		}
		cout << endl;
	}
}

