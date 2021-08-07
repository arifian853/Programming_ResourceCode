#include <iostream>
using namespace std;

int main() {
  int day;
  
  cout<< "Insert 1 - 7 (Monday to Sunday) : ";
  cin >>day;
  
  cout<<endl;
  
  cout<<"The day you insert is : ";
  
  cout<<day<<endl;
  cout<<endl;
  
  cout<<"And "<< day <<"th day"<< " is ";
  
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
   break;
  case 7:
    cout << "Sunday";
    break;
  default:
  	cout << "NOT A DAY";
    break;
  }
  return 0;
}

//if the day value is below 1 or more than 7 (1 < x > 7) the function will print "NOT A DAY"
