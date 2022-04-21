#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
        int prev = fact(n-1);
        return n*prev;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << fact(n) << endl;
    return 0;
}
