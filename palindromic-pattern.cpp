#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for(int i=1; i <= n; i++){
        int start = i;
        for(int j=1; j <= n-i; j++)
        {
            cout << "  ";
        }         
        for(int j=1; j <= i; j++){
            cout << start << " ";
            start--;
        }
        if(i >= 2){
            start = 2;
            for(int j=1; j < i; j++){
                cout << start << " ";
                start++;
            }
        }
        cout << endl;
    }

    return 0;
}
