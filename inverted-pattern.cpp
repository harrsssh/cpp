#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int num = 1;
        for(int j = 1; j <= n-i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
