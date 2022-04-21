#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(int argc, char const *argv[])
{
    int num1,num2;
    cin >> num1 >> num2;
    int result;

    result = sum(num1,num2);
    cout << result << endl;
    return 0;
}
