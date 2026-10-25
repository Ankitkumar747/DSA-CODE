#include <iostream>
using namespace std;

// Declare function prototypes
void add();
void sub();
void pro();
void div();

// Function call
int main()
{
    int n;
    cout << "Choose option:"<< endl;
    cout <<  "For add choose 1"<< endl;
    cout <<  "For sub choose 2"<< endl;
    cout <<  "For pro choose 3"<< endl;
    cout <<  "For div choose 4"<< endl;
    cin >> n;

    if(n == 1){
        add();
    }
    else if(n == 2){
        sub();
    }
    else if(n == 3){
        pro();
    }
    else if(n == 4){
        div();
    }
    else {
        cout << "Invalid option chosen!" << endl;
    }
    return 0;
}

// Function definitions
void add()
{
    int a, b, c;
    cout << "Enter value of a and b: ";
    cin >> a >> b;
    c = a + b;
    cout << "Sum is: " << c << endl;
}

void sub()
{
    int a, b, c;
    cout << "Enter value of a and b: ";
    cin >> a >> b;
    c = a - b; 
    cout << "Subtraction result is: " << c << endl;
}

void pro()
{
    int a, b, c;
    cout << "Enter value of a and b: ";
    cin >> a >> b;
    c = a * b;
    cout << "Product is: " << c << endl;
}

void div()
{
    float a, b, c;
    cout << "Enter value of a and b: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        c = a / b;
        cout << "Division result is: " << c << endl;
    }
}
