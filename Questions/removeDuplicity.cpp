#include<iostream>
using namespace std;


void removeDuplicity(int a[], int size){
    for (int i = 0; i < size - 1; i++) // Traverse elements up to the second to last
    {
        if (a[i] == a[i + 1]) // Condition for duplicate
        {
            for (int index = i; index < size - 1; index++)
            {
                a[index] = a[index + 1]; // Replace elements
            }
            size--; // Decrement size only when a duplicate is found
        }
    }
}


int main()
{
    int a[100];
    int size;

    cout<<"Enter array size : ";
    cin>>size;

    cout<<"Enter array elements : ";
    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    removeDuplicity(a, size);

    cout << "Array after removing duplicates: ";
    for (int index = 0; index < size; index++) // Iterate up to the updated size
    {
        cout << a[index] << " ";
    }
    cout << endl;

    return 0;
}