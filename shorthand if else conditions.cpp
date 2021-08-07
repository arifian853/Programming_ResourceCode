#include <iostream>
#include <ctime>

using namespace std;

// variable = (condition) ? expressionTrue : expressionFalse;

int main () {
	int time = 10;
	string result = (time < 18) ? "Good day." : "Good evening.";
	
	cout << endl;
	cout << result;
}
