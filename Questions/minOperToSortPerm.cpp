#include<bits/stdc++.h>
using namespace std;

/*
Algorithm: Minimum Operations

1. Find the size of the array n.

2. If n == 1, return 0.

3. Find the position of 0 in the array and store it in zero.

4. Assume there are two possible valid orders:
   a) Increasing order: 0, 1, 2, 3, ..., n-1
   b) Decreasing order: 0, n-1, n-2, ..., 1

5. Set:
   increasing = true
   decreasing = true

6. Traverse the array circularly starting from 0.

7. For every position:
   - Check whether the current value is equal to the expected
     increasing value.
   - Check whether the current value is equal to the expected
     decreasing value.

8. If a value does not match the increasing pattern,
   set increasing = false.

9. If a value does not match the decreasing pattern,
   set decreasing = false.

10. If both increasing and decreasing become false,
    return -1 because the required arrangement is impossible.

11. If increasing order is possible:
    Calculate:
        option1 = zero
        option2 = n - zero + 2

    Return the minimum of option1 and option2.

12. Otherwise, decreasing order is possible:
    Calculate:
        option1 = n - zero
        option2 = zero + 2

    Return the minimum of option1 and option2.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        // If there is only one element,
        // no operation is required.
        if (n == 1) {
            return 0;
        }

        // Find the position of 0 in the array.
        int zero = find(nums.begin(), nums.end(), 0) - nums.begin();

        // There are two possible valid orders:
        // 1. Increasing: 0, 1, 2, 3, ..., n-1
        // 2. Decreasing: 0, n-1, n-2, ..., 1
        bool increasing = true;
        bool decreasing = true;

        // Traverse the array circularly starting from 0.
        for (int i = 1; i < n; i++) {
            int value = nums[(zero + i) % n];

            // Check if the array follows increasing order.
            if (value != i) {
                increasing = false;
            }

            // Check if the array follows decreasing order.
            if (value != n - i) {
                decreasing = false;
            }

            // If neither order is possible,
            // the required arrangement cannot be achieved.
            if (!increasing && !decreasing) {
                return -1;
            }
        }

        // If increasing order is possible,
        // calculate the minimum operations.
        if (increasing) {
            return min(zero, n - zero + 2);
        }

        // Otherwise, decreasing order is possible.
        return min(n - zero, zero + 2);
    }
};


int main(){
    Solution s;

    vector<vector<int>> nums = {{0,2,1},{1,0,2}};

    for(auto num:nums){
        cout<<s.minOperations(num)<<endl;
    }
    
    return 0;
}