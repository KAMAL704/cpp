#include <iostream>
using namespace std;

int linearSearch(int arr[] , int sz , int target){
    for(int i = 0; i < sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12,23,1,23,12,2};
    int sz = 6;
    int target = 2;

    cout<< linearSearch(arr,  sz, target  );
    return 0;
}