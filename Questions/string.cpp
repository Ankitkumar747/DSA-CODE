#include<iostream>
#include<string>
using namespace std;

bool isAlpha(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;
    }

    return false;
}

bool isNum(char c){
    if(c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0'){
        return true;
    }

    return false;
}


int main(){
    string s;
    cin>>s;

    string a = "";
    string b = "";
    string c = "";

    for(int i=0; i<s.length(); i++){
        if(isAlpha(s[i])){
            a+=s[i];
        }
        else if(isNum(s[i])){
            b+=s[i];
        }
        else{
            c+=s[i];
        }
    }

    if(a.length() == 0){
        cout<<-1;
    }else{
        cout<<a<<endl;
    }

    if(b.length() == 0){
        cout<<-1;
    }else{
        cout<<b<<endl;
    }

    if(c.length() == 0){
        cout<<-1;
    }else{
        cout<<c<<endl;
    }

    return 0;
}