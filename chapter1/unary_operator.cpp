
// a++  == (a = a+1)
// a--  == (a = a-1)


#include <iostream>
using namespace std;

int main(){
    int a = 10;

    int b = a++; //post increment operator

    cout << b <<endl;
    cout << a <<endl;

    int A = 5;;
    int B = ++A; // pre increment operator

    cout << B <<endl;
    cout << A <<endl;
    return 0;
}