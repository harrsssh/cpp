#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr1[2][2] = {1, 2, 3, 4};
    int arr2[2][2] = {5, 6, 7, 8};

    int arr[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            arr[i][j] = arr2[i][j] - arr1[i][j];
        }
    }

    cout << "the substraction of given two matrices is " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
