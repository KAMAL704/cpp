#include <iostream>
using namespace std;

int main() {
    int a= 3; int b = 7 ;
    cout<< (a & b)<<endl;  //bitwise And
    cout<< (a | b)<<endl;  //bitwise Or
    cout<< (a ^ b)<<endl;  //bitwise XOR
    cout <<(10<<2)<<endl;  //bitwise left shift  a<<b = a*2^b
    cout <<(10>>1)<<endl;  //bitwise right shift a>>b = a/2^b

    return 0;
}