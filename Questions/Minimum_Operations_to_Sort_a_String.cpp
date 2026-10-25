#include <bits/stdc++.h>
using namespace std;

/*
Algorithm
1. String ki length n nikalo.
2. Agar n == 2 hai, -1 return karo.
3. String mein:
   - minimum character mn
   - maximum character mx
   - aur check karo ki string already sorted hai ya nahi.
4. Agar string sorted hai → 0 operations.
5. Agar:
   - first character mn hai ya
   - last character mx hai
     → 1 operation.
6. Otherwise, middle positions (1 se n-2) mein check karo:
   - agar mn ya mx mil jaye → 2 operations.
7. Agar upar ke kisi case mein nahi aaya → 3 operations.
*/

class Solution {
public:
    int minOperations(string s) {

        int n = s.length();

        if (n == 2) {
            return -1;
        }

        char mn = s[0];
        char mx = s[0];
        bool isSorted = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                isSorted = 0;
            }

            mn = min(mn, s[i]);
            mx = max(mx, s[i]);
        }

        if (isSorted) {
            return 0;
        }

        if (s.front() == mn || s.back() == mx) {
            return 1;
        }

        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx) {
                return 2;
            }
        }

        return 3;
    }
};

int main() {

    Solution S;

    string s = "card";

    cout << S.minOperations(s) << endl;

    return 0;
}