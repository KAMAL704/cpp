// //bruit force approach


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[5] = {1,-2,3,4,-5};
//     int maxSum = INT_MIN;

//     for(int st =0; st<n; st++){
//         int currentSum = 0;
//         for(int end = st; end<n; end++){
//             currentSum += arr[end];
//             maxSum = max(currentSum , maxSum);
        
//         }
//     }
//     cout<<"max sum =  "<<maxSum;
//     cout<<endl;

//     return 0;
// }


//kadane's Algorithm
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1,-4,2,3,-4};
    int curSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i<n; i++){
        curSum += arr[i];
        maxSum = max(curSum, maxSum);
        // cout<<curSum<<endl;
        if(curSum < 0 ){
            curSum = 0;
        }
    }
    cout<<"max sum =  "<<maxSum;

    return 0;
}