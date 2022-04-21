#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=10;
    int *p = &a;
    int **q = &p;

    cout << &a << endl;
    cout << *p << endl;
    cout << **q << endl;
    return 0;
}

