#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    bool prime = true;
    for(int i=2; i < n; i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
}
    if(prime){
        cout << "given number is prime." << endl;
    }
    else{
        cout << "given number is not prime." << endl;
    }
    return 0;
}
