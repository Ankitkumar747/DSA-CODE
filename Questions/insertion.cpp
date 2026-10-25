#include<iostream>
using namespace std;

int main(){

int a[100]={1,2,4,5,6};
int size=5;
int newPosition=2;

for(int index = size-1; index >= newPosition; index--){
    a[index+1]=a[index];
}

int newElement=3;
a[newPosition]=newElement;

for(int index=0; index<=size; index++){
    cout<<a[index];
}
    return 0;
}