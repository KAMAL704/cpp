
// //brute force approachs 
  
// #include <iostream>
// #include <vector>
// using namespace std;
   

// // vector<int> pairSum(vector<int>nums , int target);
// int majorityElements(const vector<int>& nums) {
//     int n = nums.size();
//     for (int val : nums) {
//         int frq = 0;
//         for (int el : nums) {
//             if (val == el) 
//             frq++;
//         }
//         if (frq > n / 2)
//         return val;
//     }
//     return -1; // no majority
// }

// int main() {
    
//     vector<int> nums = {2,2,1,1,1,2,2};
//     int ans = majorityElements(nums);
//     cout << ans << endl;

//     return 0;
// }



//optimize  approachs using sorting.
  
// #include <iostream>
// #include <vector>
// using namespace std;
   

// // vector<int> pairSum(vector<int>nums , int target);
// int majorityElements(const vector<int>& nums) {
//     int n = nums.size();
//     int ans = nums[0];
//     int frq =1;
//     for (int i =1; i<n; i++) {
//         if(nums[i] == nums[i-1]){
//             frq ++;
//         }
//         else {
//             frq =1; 
//             ans = nums[i];
            
//         }
//         if (frq > n / 2)
//         return ans;
//     }
//     return ans; 
// }

// int main() {
    
//     vector<int> nums = {2,2,1,1,1,2,2,1,2};
//     int ans = majorityElements(nums);
//     cout << ans << endl;

//     return 0;
// }

//moore's voting algorithm



//brute force approachs 
  
#include <iostream>
#include <vector>
using namespace std;
   

// vector<int> pairSum(vector<int>nums , int target);
int majorityElements(const vector<int>& nums) {
    int n = nums.size();
    int frq = 0;
    int ans = 0;
    for (int i =0 ; i<n; i++) {
        if(frq == 0){
            
            ans = nums[i];
            // frq =1;

        }
        else if(ans == nums[i]){
            frq++;
        }
        else{
            frq--;
        }
    }
    return ans; 
}

int main() {
    
    vector<int> nums = {2,2,1,1,1};
    int ans = majorityElements(nums);
    cout << ans << endl;

    return 0;
}

