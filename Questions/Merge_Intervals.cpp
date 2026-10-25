#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Algorithm -
// 1. First, sort all the intervals according to their starting time.
// 2. Create an empty vector ans to store the merged intervals.
// 3. Traverse each interval one by one.
// 4. If ans is empty or the starting point of the current interval is greater than the ending point of the last interval in ans,
//       then there is no overlap. Add the current interval to ans.
// 5. Otherwise, the current interval overlaps with the last interval in ans. 
//      Merge them by updating the ending point of the last interval with the maximum of both ending points.
// 6. Continue this process until all intervals are processed.
// 7. Finally, return ans as the merged list of intervals.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for(auto interval:intervals){
            if(ans.empty() || interval[0] > ans.back()[1]){
                ans.push_back(interval);
            }
            else{
                ans.back()[1] = max(interval[1], ans.back()[1]);
            }
        }

        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};

    for (auto interval : intervals) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout<<endl;

    vector<vector<int>> mergedIntervals = s.merge(intervals);

    for (auto interval : mergedIntervals) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}

