#include<bits/stdc++.h>
using namespace std;

int pairingfriends(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return pairingfriends(n-1) + pairingfriends(n-2)*(n-1);

}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << pairingfriends(n) << endl;
    return 0;
}
