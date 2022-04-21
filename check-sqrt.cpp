#include<bits/stdc++.h>
using namespace std;

int checkPower(int n){
    return (n && !(n & n-1));
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if(checkPower(n)){
        cout << "the given number is power of 2" << endl;
    }

    else{
        cout << "the given number is not a power of 2" << endl;
    }

    return 0;
}
