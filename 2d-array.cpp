#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    cin >> n >> m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int x;
    cin >> x;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == x){
                cout << "x is found at " << i << " " << j << endl;
            }
        }
}
    return 0;
}
