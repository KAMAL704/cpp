#include <iostream>
using namespace std;

//function definition
//using parameter
int sum(int a, int b){//parameters
    int s=a+b;
    return s;
}
int main(){
    //functiion call / invoke
   cout<< sum(10,5) <<endl;//10 and 5 are arguments
    return 0;
}