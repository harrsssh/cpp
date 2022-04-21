#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1; 
    cin >> s1;

    // converting into upper case

    for (int i = 0; i < s1.length(); i++)
    {
        int x = s1[i];
        if(s1[i] >= 'a' && s1[i] <= 'z'){  
            s1[i] = s1[i] - 32;
        }
    }

    cout << s1 << endl;

    // converting into lower case

    for (int i = 0; i < s1.length(); i++)
    {
        int x = s1[i];
        if(s1[i] >= 'A' && s1[i] <= 'Z'){  
            s1[i] = s1[i] + 32;
        }
    }

    cout << s1 << endl;

    // inbuilt function

    string s = "hfakjhilyikhkas";

    transform(s.begin(), s.end(), s.begin(), ::toupper); //for lower to lower

    cout << s << endl;

    return 0;
}
