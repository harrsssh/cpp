#include<bits/stdc++.h>
using namespace std;

void PrimeFactor(int n){
    int spf[100] = {0};
    for(int i=2; i<=n; i++){
        spf[i] = i;
    }

    for(int i=2; i<=n; i++){
        if(spf[i] == i){
            for(int j=i*i; j<=n; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout << spf[n] << " ";
        n = n/spf[n];
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    PrimeFactor(n);
    return 0;
}
