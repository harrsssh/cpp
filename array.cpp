#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
