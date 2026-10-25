#include<iostream>
using namespace std;

int printReverse(int number){

    if(number < 1){
        return 0;
    }

    return number%2 + 10*printReverse(number/2);
}

int main(){
    int number = 4;
    cout<<printReverse(number);
    return 0;
}