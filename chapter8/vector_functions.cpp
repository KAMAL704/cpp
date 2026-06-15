#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;


    // vector<char> vect = {'a','b','c'};

    // }
    // cout << vec[1]<<endl;
    cout<<"size = "<<vec.size() <<endl;   //size of vector
    vec.push_back(12);    //push back = add num.
    vec.push_back(23);
    vec.push_back(53);
    cout<<"size after push back = "<<vec.size() <<endl;   //size of vector after push back = 1
    vec.pop_back();   //delete last value




    for(int val : vec){  //for each loop
        cout<<val<<endl;
    }


    cout<<vec.front()<<endl;    //print first value
    cout<<vec.back()<<endl;    //print last value
    cout<<vec.at(0)<<endl; 



    return 0;
}