#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int n,m;
    cin >> n >> m;

    int matrix[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }

    int key;
    cin >> key;

    int r = n-1;
    int c = 0;

    while(r >= 0 && c<m){
        if(matrix[r][c] == key){
            cout << "true" << endl;
            return 0;
        }
        else{
            if(matrix[r][c] > key)
            {
                c--;
            }
            else{
                r++;
            }
        }
    }
    cout << "false" << endl;
    return 0;
}