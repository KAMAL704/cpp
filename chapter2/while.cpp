#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n = 5;
    int oddSum = 0;

    while(i <= n){
        if(i%2 != 0){
            // cout<<i<< "\n";
            oddSum+=i;
        }
        i++;
    }
    cout<<"odd sum = "<<oddSum <<endl;
    // cout<< endl;
    return 0;
}

