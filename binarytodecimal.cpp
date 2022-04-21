#include<bits/stdc++.h>
using namespace std;

int decimalValue(int n){

    int ans = 0;

    for (int i = 0; n > 0; i++)
    {
        int current = n%10;
        ans = ans + current*(pow(2,i));
        n = n/10;
    }

    return ans;

}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << decimalValue(n) << endl;    
    return 0;
}
