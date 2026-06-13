// This are  implicit conversion. "small bits is convert into big bits"


#include <iostream>   
using namespace std;

int main(){
    char grade = 'A';
    int x = grade;

    cout << x << endl;
    return 0;
}


// This are explicit type cast. "big bits is convert into small bits"

#include <iostream>   
using namespace std;

int main(){
    double price = 12.78;
    int newprice = (int)price;

    cout << newprice << endl;
    return 0;
}
