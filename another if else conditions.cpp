#include <iostream>
using namespace std;

int main() {
  int x, y;
  
  cout << "Insert x : ";
  cin >> x;
  
  cout<<endl;
  
  cout << "Insert y : ";
  cin >> y;
  
  cout<<endl;
  
  if (x > y) {
    cout << "x is greater than y"<<endl;
    cout << "  (x > y) " << endl;
  }
  
  else if (x == y) {
  	cout << "value is same"<<endl;
  	cout << "  (x == y) " << endl; 
  }
  
  else {
  	cout << "x is NOT greater than y"<<endl;
  	cout << "  (x < y) " << endl;
  }  
  return 0;
}
