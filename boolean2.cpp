#include <iostream>
 
using namespace std;
 
int main()
{
  int var1, var2;
  cout << "masukkan angka pertama "; cin >> var1;
  cout << "masukkan angka kedua "; cin >> var2;
  cout << endl;
 
  if (var1 < var2) {
    cout << "angka pertama lebih kecil daripada angka kedua" << endl;
  }
  else if (var1 > var2) {
    cout << "angka pertama lebih besar daripada angka kedua" << endl;
  }
  else {
    cout << "angka pertama sama dengan angka kedua"<< endl;
  }
 
  return 0;
}