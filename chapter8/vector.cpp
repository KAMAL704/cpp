#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec = {1,2,3};
    vector<char> vect = {'a','b','c'};
    for(char val : vect){  //for each loop
        cout<<val<<endl;
    }
    // cout << vec[1]<<endl;
    cout<<"size = "<<vect.size() <<endl; 
    return 0;
}