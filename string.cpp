#include <iostream>
 
using namespace std;
 
int main()
{
  string var1, var2, var3;
  cout << "masukkan kalimat pertama "; cin >> var1;
  cout << "masukkan kalimat kedua "; cin >> var2;
  cout << "masukkan kalimat ketiga "; cin >> var3;
  cout << endl;
 
  cout << "Panjang string var1 adalah " << var1.length() <<endl;
  cout << "Panjang string var2 adalah " << var2.length() <<endl;
  cout << "Panjang string var3 adalah " << var3.size() <<endl;
 
  return 0;
}