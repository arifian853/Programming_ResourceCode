#include <iostream>
using namespace std;
int main ()
{
int nilai;
cout << "masukan nilai 0-100 : ";
cin >> nilai;
if (nilai < 40)
{
cout << "Grade anda = E";
}
else if (nilai < 41 - 60)
{
cout << "Grade anda = D";
}
else if (nilai < 61 - 70)
{
cout << "Grade anda = C";
}
else if (nilai < 71 - 80)
{
cout << "Grade anda B";
}
else if (nilai >= 81 - 100)
{
cout << "Grade anda A";
}
else
{
cout << "inputan diluar jangkauan";
}
return 0;
}
