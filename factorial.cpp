#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = n; i >= 1; i--){
        factorial = factorial*i;
    }
    return factorial;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;
    return 0;
}
