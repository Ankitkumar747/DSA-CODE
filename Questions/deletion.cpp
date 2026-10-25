#include<iostream>
using namespace std;

int main(){
    
    int a[100]={1,2,3,3,4,5,6};
    int size=6;
    
    for(int index=2; index <= size; index++){
        a[index]=a[index+1];
    }

    size--;

    for(int index=0; index<=size; index++){
        cout<<a[index];
    }
    return 0;
}