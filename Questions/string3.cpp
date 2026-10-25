#include<iostream>
#include<string>
using namespace std;

int main(){

    string text = "abcabcdabcdeabcdef";
    string pattern = "abcde";

    int i = 0;

    while(i <= text.length() - pattern.length()){

        int j = 0;

        while(j < pattern.length()){

            if(text[i+j] == pattern[j]){
                j++;
            }
            else{
                break;
            }
        }

        if(j == pattern.length()){
            cout << "Pattern found at the index " << i;
            return 0;
        }
        else{
            i++;
        }
    }

    cout << "Pattern not found";

    return 0;
}