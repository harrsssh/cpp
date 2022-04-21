#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n){
    int counter = 1;
    while(counter < n-1){
        for(int i = 0; i < n-counter; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
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

    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

