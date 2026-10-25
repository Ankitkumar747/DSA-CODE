#include <bits/stdc++.h>
using namespace std;

/*
Algorithm:
1. If m == 1, return 1 because every power of 1 is 1.
2. Initialize power = 1 (m⁰).
3. Keep multiplying power by m until power >= n.
4. Set high = power and low = high / m.
5. Compare n - low and high - n.
6. Return the closer power; if distances are equal, return high.
*/

// int nearestPower(int N, int M)
// {

//     if (M == 1)
//     {
//         return 1;
//     }

//     int power = 1;

//     while (power < N)
//     {
//         power *= M;
//     }

//     int high = power;
//     int low = power / M;

//     if ((N - low) >= (high - N))
//     {
//         return high;
//     }
//     else
//     {
//         return low;
//     }
// }

/*
Algorithm:
1. If m == 1, return 1 because every power of 1 is 1.
2. Find the largest exponent using floor(log(n) / log(m)).
3. Calculate the lower power as low = m ^ exponent.
4. Calculate the next power as high = low * m.
5. Compare n - low with high - n.
6. Return the closer power; in case of a tie, return high.
*/
int nearestPower(int N, int M)
{

    if (M == 1)
    {
        return 1;
    }

    int exponent = floor(log(N) / log(M));

    int low = pow(M, exponent);
    int high = low * M;

    if ((N - low) >= (high - N))
    {
        return high;
    }
    else
    {
        return low;
    }
}

int main()
{
    int M, N;

    cout << "Enter base value:" << endl;
    cin >> M;

    cout << "Enter target value:" << endl;
    cin >> N;

    cout << "Answer: " << nearestPower(N, M) << endl;

    return 0;
}