#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos){
    return (n & (1<<pos)) != 0;
}

void twoUniques(int *arr, int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }

    int temp = xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i],pos-1)){
            newxor = newxor^arr[i];
        }
    }
    int next = newxor^temp;

    cout << newxor << endl;
    cout << next << endl;

    
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    twoUniques(arr,n);

    return 0;
}
