#include <iostream>
#include <string>

using namespace std;

class myClass {
  public:
    string name;
};

int main()
{
    myClass myObj;
    myClass myAge;
    
    myObj.name = "Amelinda";
    myAge.name = "15 years old";
    
    cout << myObj.name << endl;
    cout << myAge.name << endl;
    return 0;
}