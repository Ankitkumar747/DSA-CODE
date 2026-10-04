#include<iostream>
using namespace std;

int main(){

    int arr[5] = {5, 10, 20, 30, 30};

    for(int i=0; i<5; i++){
        int sum = arr[0];
        for(int j=0; j<5-i; i++){
            sum = sum + arr[j] + arr[j+1];
            arr[j] = sum;
        }
    }

    cout<<arr[0];

    return 0;
}