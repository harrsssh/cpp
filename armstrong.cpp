#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;

    while(n>0){
        int lastdigit = n%10;
        sum += lastdigit*lastdigit*lastdigit;
        n=n/10;
    }

    cout << sum << endl;
    if(sum == originaln){
        cout << "the given number is armstrong." << endl;
    }
    else {
        cout << "the given number is not armstrong" << endl;
    }
    return 0;
}
