#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int count = 1;
    while((n & n-1) != 0 ){
        count++;
        n = n&n-1;
    }

    cout << count << endl;
    return 0;
}
