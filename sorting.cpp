#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n){
    for(int i = 0; i < n-1; i++){

        int min = arr[i];
        for(int j = i+1; j < n; j++){
            if(arr[j] < min){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}
