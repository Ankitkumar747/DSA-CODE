#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int solve(int val)
    {
        int sum = 0;
        while (val > 0)
        {
            int rem = val % 10;
            sum = sum + rem;
            val = val / 10;
        }
        return sum;
    }

    int minSwaps(vector<int> &nums)
    {
        vector<int> temp;
        for (int i : nums)
        {
            int sum = solve(i);
            temp.push_back(sum);
        }

        
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {37, 100};

    int ans = s.minSwaps(nums);
    cout << ans << endl;

    return 0;
}