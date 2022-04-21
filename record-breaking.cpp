#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int mx=INT_MIN;
    for(int i=0; i<n-1; i++){
        if(arr[i]>mx && arr[i] > arr[i+1]){
            cout << arr[i] << " ";
            mx = max(arr[i],mx);
        }
    }
    return 0;
}
