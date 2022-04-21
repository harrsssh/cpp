#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }

    string next = s.substr(1);
    reverse(next);
    cout << s[0];
}

int main(int argc, char const *argv[])
{
    string s = "binod";

    reverse(s);
    return 0;
}
