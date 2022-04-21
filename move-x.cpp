#include<bits/stdc++.h>
using namespace std;

string moveX(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = moveX(s.substr(1));

    if(ch == 'x'){
        return ans+'x';
    }
    else{
        return ch+ans;
    }
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    cout << moveX(s) << endl;
    return 0;
}
