#include<iostream>
#include<vector>
using namespace std;

void merge(int array[], int start, int end){

    int mid = (start + end)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int* leftArray = new int[len1];
    int* rightArray = new int[len2];

    // copy value to newly created arrays (left and right)
    int k = start;
    int i = 0;
    while(i < len1){
        leftArray[i] = array[k];
        i++;
        k++;
    }

    int m = mid + 1;
    int j = 0;
    while(j <len2){
        rightArray[j] = array[m];
        j++;
        m++;
    }

    // merge two arrays
    int leftArrayIndex = 0;
    int rightArrayIndex = 0;
    int mainArrayIndex = start;

    while(leftArrayIndex < len1 && rightArrayIndex < len2){
        if(leftArray[leftArrayIndex] < rightArray[rightArrayIndex]){
            array[mainArrayIndex] = leftArray[leftArrayIndex];
            mainArrayIndex++;
            leftArrayIndex++;

        }else{
            array[mainArrayIndex] = rightArray[rightArrayIndex];
            mainArrayIndex++;
            rightArrayIndex++;
        }
    }

    // copy left elements of the arrays
    while(leftArrayIndex < len1){
        array[mainArrayIndex] = leftArray[leftArrayIndex];
        mainArrayIndex++;
        leftArrayIndex++;
    }

    while(rightArrayIndex < len2){
        array[mainArrayIndex] = rightArray[rightArrayIndex];
        mainArrayIndex++;
        rightArrayIndex++;
    }
}

void mergeSort(int array[], int start, int end){
    // base case
    if(start >= end){
        return;
    }

    int mid = (start + end)/2;

    // left part ko sort kardo recursion se
    mergeSort(array, start, mid);
    // right part ko sort kardo recursion se
    mergeSort(array, mid+1, end);
    // merge both sorted arrays
    merge(array, start, end);
}

int main(){

    int array[]={7,3,21,6,24,4,11,9};
    int size = 8;

    int start = 0;
    int end = size-1;

    mergeSort(array, start, end);

    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}