#include<bits/stdc++.h>
using namespace std;

// complexity O(n).

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            cout << i << endl;
            break;
        }
        if(i == n-1){
            cout << "-1" << endl;
        }
    }
    
    return 0;
}
