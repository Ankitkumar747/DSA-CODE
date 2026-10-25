#include<iostream>
using namespace std;

void merge(int array[], int s, int e){
    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    // copy elements to left array 
    int k = s;
    int i = 0;
    while(i < len1){
        left[i] = array[k];
        i++;
        k++;
    }

    // copy elements to right array
    int m = mid+1;
    int j = 0;
    while(j < len2){
        right[j] = array[m];
        j++;
        m++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            array[mainIndex] = left[leftIndex];
            mainIndex++;
            leftIndex++;
        }else{
            array[mainIndex] = right[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }

    // copy logic for left array
    while(leftIndex < len1){
        array[mainIndex] = left[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    // copy logic for right array
    while(rightIndex < len2){
        array[mainIndex] = right[rightIndex];
        mainIndex++;
        rightIndex++;
    }
}

void mergeSort(int array[], int s, int e){
    // base case
    if(s >= e){
        return;
    }

    int mid = (s + e)/2;
    // left part ko sort kardo recursion se
    mergeSort(array, s, mid);
    // right part ko sort kardo recursion se
    mergeSort(array, mid+1, e);
    // merge both sorted arrays
    merge(array, s, e);
}


int main(){

    int array[]={7,3,21,6,24,4,11,9};
    int size = 8;

    int s = 0;
    int e = size-1;

    mergeSort(array, s, e);

    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}