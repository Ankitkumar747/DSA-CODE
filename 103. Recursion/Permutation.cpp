#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printAllPermutation(string& s, int i, vector<string>& ans){
    if(i >= s.length()){
        // cout<<s<<endl;
        ans.push_back(s);
        return;
    }

    for(int j=i; j<s.length(); j++){
        swap(s[i], s[j]);
        printAllPermutation(s, i+1, ans);
        swap(s[i], s[j]);
    }
}

int main(){
    string s = "abcd";
    vector<string>ans;
    printAllPermutation(s, 0, ans);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}