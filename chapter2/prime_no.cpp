#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int n = 9;
    bool isPrime = true;
    for(int i = 2; i <= sqrt(n); i++){        //(i*i <=n) =  i <= n-1 =  i <= sqrt(n)
        if (n%i == 0){ //non prime
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
    cout<<"prime"<<endl;
    }
    else{
    cout<<" Non prime";
    }
    return 0;
}