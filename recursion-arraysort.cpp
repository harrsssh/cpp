#include<bits/stdc++.h>
using namespace std;

bool sort(int *arr, int n){
    if(n==1){
        return true;
    }

    bool restarr = sort(arr+1,n-1);
    if(arr[0] < arr[1] && restarr){
        return true;
    }
    else{
        return false;
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

    cout << sort(arr,n) << endl;
    return 0;
}
