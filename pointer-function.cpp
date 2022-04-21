#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void inc(int *a){
    (*a)++;
}


int main(int argc, char const *argv[])
{
    int a=2, b=4;

    int *aptr = &a;
    int *bptr = &b;

// also can be sent directly as swap(&a,&b);
// calling by reference......
    swap(aptr, bptr);

    inc(&a);

    cout << a << endl;;

    cout << a << " " << b << endl;
    return 0;
}
