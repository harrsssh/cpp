#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;

    return 0;
}
