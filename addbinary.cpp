#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int ans = 0;
    while(n>0){
        int lastdigit = n%10;
        ans = ans*10 + lastdigit;
        n/=10;
    }
    return ans;
}

int addbinary(int a, int b){
    int ans = 0;
    int previouscarry = 0;
    while(a > 0 || b > 0){
        if(a%2 == 0 && b%2 == 0){
            ans = ans*10 + previouscarry;
            previouscarry = 0;
        }
        else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)){
            if(previouscarry == 1){
                ans = ans%10 + 0;
                previouscarry = 1;
            }
            else{
                ans = ans*10 + 1;
                previouscarry = 0;
            }
        }
        else{
            ans = ans*10 + previouscarry;
            previouscarry = 1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(previouscarry == 1){
            if(a%2 == 1){
                ans = ans*10 + 0;
                previouscarry = 1;
            }
            else{
                ans = ans*10 + 1;
                previouscarry = 0;
            }
        }
        else{
            ans = ans*10 + a%2;
        }
        a/=10;             
    }
    while(b>0){
        if(previouscarry == 1){
            if(b%2 == 1){
                ans = ans*10 + 0;
                previouscarry = 1;
            }
            else{
                ans = ans*10 + 1;
                previouscarry = 0;
            }
        }
        else{
            ans = ans*10 + b%2;
        }
        b/=10;             
    }

    if(previouscarry == 1){
        ans = ans%10 + 1;
    }
    ans = reverse(ans);
    return ans;
}



int main(int argc, char const *argv[])
{
    int a;
    int b;
    cin >> a >> b;

    cout << addbinary(a,b) << endl;
    return 0;
}
