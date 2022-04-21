#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr,int n){
    for(int i=1; i<n; i++){
        int currant = arr[i];
        int j = i-1;
        while((currant < arr[j]) && (j >= 0)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = currant;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    return 0;
}
