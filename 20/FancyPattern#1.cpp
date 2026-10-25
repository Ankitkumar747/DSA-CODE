#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Validate input
    if (n < 1 || n > 8)
    {
        cout << "Please enter a number of rows between 1 and 8." << endl;
        return 1;
    }

    int total_columns = 8 + n; // Dynamically calculate column width

    for (int row = 0; row < n; row++)
    {
        int start_num_index = 8 - row; // Calculate starting index
        int num = row + 1;             // Number to print
        int count_num = num;           // Remaining count of numbers to print

        for (int col = 0; col < total_columns; col++)
        {
            if (col == start_num_index && count_num > 0)
            {
                cout << num;
                start_num_index += 2; // Move to the next index
                count_num--;          // Decrease remaining count
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
