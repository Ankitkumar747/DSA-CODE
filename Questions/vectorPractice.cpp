#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr{{1,2,3}, {4,5,6}};

    cout<<arr[0].back();

    return 0;
}