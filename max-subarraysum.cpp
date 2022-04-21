#include<bits/stdc++.h>
using namespace std;

// brute force...

/*

int main(int argc, char const *argv[])
{
    int n;
    cin >> n; 

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j=i; j<n;j++){
            for(int k=i; k<=j; k++){
                curr_sum += arr[k];
            }
            sum = max(sum,curr_sum);
            curr_sum = 0;
        }
    }
    cout << sum << endl;
    return 0;
}

*/

// cummulative sum approach

int main(){
    int n; 
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int curr_sum[n+1];
    curr_sum[0] = 0;

    for(int i=1; i<=n; i++){
        curr_sum[i] = curr_sum[i-1] + arr[i-1];
    }

    int max_sum = INT_MIN;
    for(int i=1; i <= n; i++){
        int sum = 0;
        max_sum = max(max_sum, curr_sum[i]);
        for(int j=1; j <= i; j++){
            sum = curr_sum[i] - curr_sum[j];
            max_sum = max(max_sum,sum);
        }
    }
    cout << max_sum << endl;
    return 0;
}
