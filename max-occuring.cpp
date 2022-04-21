#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    int arr[26] = {0};

    for(int i=0; i<s.length(); i++){
        arr[s[i] - 'a']++;
    } 
    int maxf = INT_MIN;
    char ans = 'a';

    for(int i=0; i<26; i++){
        if(arr[i] > maxf){
            maxf = arr[i];
            ans += i;
        }
    }

    cout << ans << " " << maxf << endl;
    return 0;
}
