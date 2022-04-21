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
    int n,r;

    cin >> n >> r;

    int ncr = fact(n)/((fact(r)*fact(n-r)));
    cout << ncr << endl;
    return 0;
}
