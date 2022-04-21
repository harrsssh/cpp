#include<bits/stdc++.h>
using namespace std;

void isPrime(int num){
    bool prime = true;
    for(int i=2; i < num; i++){
        if(num%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime){
        cout << num << endl;
    }

}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        isPrime(i);
    }
    return 0;
}
