#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int ans = 0;
    int curr = 0;
    cin >> n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n+1);
    cin.ignore();

    int i=0;

    while (i < n+1)
    {
        if(arr[i] == ' ' || arr[i] == '\0'){
            {
                if(curr > ans){
                    ans = curr;
                }
                curr = 0;
            }
        }
        else{
            curr++;
        }

        if(arr[i] == '\0'){
            break;
        }
        i++;   
    }

    printf("%d",ans);
    return 0;
}
