#include <iostream>
using namespace std;
int main()
{
    int angka1, angka2, op;
  cout<< "masukkan angka pertama= "; 
  cin>> angka1;
  cout<< "masukkan angka kedua= "; 
  cin>> angka2;
  
  cout<< "pilih operasi aritmatika "; 
  cout<<endl;
  cout<< "1. pertambahan (+)"<<endl;
  cout<< "2. pengurangan (-)"<<endl;
  cout<< "3. perkalian (×)"<<endl;
  cout<< "4. pembagian (:)"<<endl;
  cout<< "pilih operasi yang diiinginkan= "; 
  cin>> op;
  if (op==1){
    cout<< "hasil pertambahan dari " <<angka1<< " + " <<angka2<< " adalah: " << angka1+angka2;
  } else if (op==2) {
    cout<< "hasil pengurangan dari " <<angka1<< " - " <<angka2<< " adalah: " << angka1-angka2;
  } else if (op==3) {
    cout<< "hasil perkalian dari " <<angka1<< " × " <<angka2<< " adalah: " << angka1*angka2;
  } else {
    cout<< "hasil pembagian dari " <<angka1<< " : " <<angka2<< " adalah: " << angka1/angka2;
  }
}