#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int a=10;
    int *ptr = &a;

    cout << *ptr << endl;

    *ptr=20;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;

    int arr[] = {22,20,30};

    int *pointer = arr;
    for(int i=0; i<3; i++){
        cout << *pointer << endl;
        pointer++;
    }

    cout << *arr << endl;

    // without using pointer only using arr...

    for(int i=0; i<3; i++){
        cout << *(arr+i) << endl;
        
    }
    return 0;
}
