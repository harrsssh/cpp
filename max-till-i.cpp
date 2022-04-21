#include<bits/stdc++.h>
using namespace std;

int  maximumTillI(int *arr, int n){
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cout << max(mx, arr[i]) << endl;
        mx = max(mx, arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    maximumTillI(arr,n);
    return 0;
}
