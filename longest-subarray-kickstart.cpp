#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int prev_diff=arr[1]-arr[0];
    int ans=0;
    int prev_max=2; 

    for(int i=2; i<n; i++){
        int curr_diff = arr[i]-arr[i-1];
        if(curr_diff == prev_diff){
            prev_max++;    
        }
        else{
                prev_diff = arr[i]-arr[i-1];
                prev_max=2;
        }
        ans=max(ans,prev_max);
    }

    cout << ans << endl;
    return 0;
}
