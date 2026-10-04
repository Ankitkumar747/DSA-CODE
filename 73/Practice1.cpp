#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

// int getLength(char c[]){
//     int length = 0;

//     while(c[length] != 0){
//         length++;
//     }

//     return length;
// }

// void reverseCharArray(char c[]){
//     int length = getLength(c);

//     int i=0;
//     int j=length-1;

//     while(i<=j){
//         char temp = c[i];
//         c[i] = c[j];
//         c[j] = temp;

//         i++;
//         j--;
//     }
// }

// bool compareString(char c[], char d[]){

//     if(getLength(c) != getLength(d)){
//         return false;
//     }

//     for(int i=0; i<getLength(c)-1; i++){
//         if(c[i] != d[i]){
//             return false;
//         }
//     }

//     return true;
// }

// bool checkPalindrome(char c[]){

//     int i=0;
//     int j=getLength(c)-1;

//     while(i<=j){
//         if(c[i] != c[j]){
//             return false;
//         }

//         i++;
//         j--;
//     }

//     return true;
// }

int main()
{

    //! ----------------------------------------------------------

    // Takin input from user
    // char c[100];

    // cin.getline(c, 100); // take input along with space

    // cout<<getLength(c)<<endl;

    // char d[100];

    // cin.getline(d, 100);

    // strcpy(d,c); to copy char

    // reverseCharArray(c);

    // cout<<compareString(c, d);

    // char c[] = "racecar";

    // cout<<checkPalindrome(c);

    //! ----------------------------------------------------------

    // string str;

    // getline(cin, str); // to take input with space in case of string

    // cout<<str<<endl;

    // cout<<str.length()<<endl;

    // cout<<str.empty()<<endl;

    // str = "Ankit";

    // str.push_back('A'); // only single char at one time
    // str.pop_back();

    // cout<<str<<endl;

    // cout<<str.substr(0,4);

    // string a = "racecar";

    // string b = a;

    // reverse(b.begin(), b.end());

    // if(a.compare(b) == 0){
    //     cout<<"String is palindrome";
    // }

    return 0;
}