#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    int t1 = 0; 
    int t2 = 1;
    int nextterm;

    for(int i=1; i <= n; i++){
        cout << t1 << endl;
        nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return nextterm;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    fibonacci(n);
    return 0;
}
