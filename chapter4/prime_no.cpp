#include <iostream>
using namespace std;

void prime(int n){
    
    bool isPrime = true;
    
    for(int i = 2; i<n-1; i++){
    
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime == true){
        cout<<"prime";
    }
    else{
        cout<<"non prime";
    }
   
}

int main(){
    int n = 7;
    prime(n);
    return 0;

}