// #include <iostream>
// using namespace std;

// int Sum(int arr[], int sz){
//     int sum = 0;
//     for(int i = 0; i<sz; i++){
//         sum+=arr[i]; 
        
//     }
//     return sum;
// }

// int Pdt(int arr[], int sz){
//        int pdt = 1;

//     for(int i = 0; i<sz; i++){
//         pdt*=arr[i]; 
//     }
//     return pdt;
// }


// int main() {
//     int arr[] = {1,2,3,4,5};
//     int sz = 5;
    
    
//      int sum = Sum(arr ,sz );
//      int pdt = Pdt(arr ,sz );
    
//     cout<<sum<<endl;
//     cout<<pdt<<endl;

//     return 0;
//     }





#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int small = INT_MAX;
    int large = INT_MIN;
    int sz = 5;
    int sum = 0;

    for(int i = 0; i<sz; i++){
        small = min(arr[i], small);
        large = max(arr[i], large);
    }
    
    sum = small + large;


    cout<< small <<endl;
    cout<< large <<endl;
    cout << sum << endl;
    
    return 0;
}
