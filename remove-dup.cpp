#include<bits/stdc++.h>
using namespace std;

string removeDup(string s){
    if(s.length() == 0){
        return "";
    }

    char ch=s[0];
    string ans = removeDup(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    else{
        return (ch+ans);
    }
}

int main(int argc, char const *argv[])
{
    string s = "aaaabbbsssscccddd";
    cout << removeDup(s) << endl;
    return 0;
}
