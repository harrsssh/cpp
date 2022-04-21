#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string st;
    cin >> st;

    cout << st[2] << endl;

    // clear function

    string abc = "afkljre nejhlkre hfndjkfghdkjfgk";
    cout << abc << endl;
    abc.clear();
    cout << abc << endl;

    // comparing strings

    string s1 = "abc";
    string s2 = "abc";

    if(s1.compare(s2) == 0){
        cout << "both strings are equal" << endl;
    }

    else{
        cout << "both are unequal" << endl;
    }

    // empty function
    string strr;
    cin >> strr;

    if(abc.empty()){
        cout << "string is empty" << endl;
    }

    // erase function

    string s3 = "niuiinlfkljhloop";

    s3.erase(3,5);
    cout << s3 << endl;

    // find function

    cout << s3.find("loop") << endl;

    // insert function
    s3.insert(2, "hello");
    cout << s3 << endl;

    // length finding

    cout << s3.size() << endl;
    cout << s3.length() << endl;

    // substring of string

    cout << s3.substr(6, 4) << endl;

    // in a numeric string we have to convert it into integer

    string s4 = "789";
    int x = stoi(s4);
    cout << x+2 << endl;

    // converting an integer into numeric string

    int y = 788;
    cout << to_string(x) + "2" << endl;

    return 0;
}
