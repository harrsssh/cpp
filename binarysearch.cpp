#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int ans = binarySearch(arr,n,key);
    cout << ans << endl;

    return 0;
}
