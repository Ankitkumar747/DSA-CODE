#include<iostream>
#include<string>
using namespace std;

char intToString(int count){
    if(count == 0){
        return '0';
    }
    else if(count == 1){
        return '1';
    }
    else if(count == 2){
        return '2';
    }
    else if(count == 3){
        return '3';
    }
    else if(count == 4){
        return '4';
    }
    else if(count == 5){
        return '5';
    }
    else if(count == 6){
        return '6';
    }
    else if(count == 7){
        return '7';
    }
    else if(count == 8){
        return '8';
    }
    else if(count == 9){
        return '9';
    }
}

int main(){
    
    string s;
    cin>>s;

    int count = 0;

    for(int i=0; i<s.length()-1; i++){
        count++;
    }

    char c = intToString(count);

    if(c == s[s.length()-1]){
        cout<<"True";
    }else{
        cout<<"False";
    }

    return 0;
}