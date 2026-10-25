#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                set<int> s;

                for (int k = i; k <= j; k++) {
                    s.insert(nums[k]);
                }

                int distinct = s.size();
                sum += distinct * distinct;
            }
        }

        return sum;
    }
};

int main() {
    Solution s;
    vector<int> nums{1, 2, 1};

    cout << s.sumCounts(nums);
    return 0;
}
