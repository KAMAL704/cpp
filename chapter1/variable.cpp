#include <iostream>
using namespace std;

int main(){
    int age = 19;          //-4 bytes
    char grade = 'A';      //-1 bytes
    float PI = 3.14;       //-4 bytes
    bool issafe = true;    //-1 bytes
    bool ISsafe = false;   //-1 bytes
    double price = 100.99; //-8 bytes

//this all 5 data type is part of PRIMITIVE DATA TYPE.

    cout << age << endl;
    cout << grade << endl;
    cout << PI << endl;
    cout << issafe << endl;  //true- print = 1 & false = 0 
    cout << ISsafe << endl;
    cout << price << endl;
    return 0;
}

