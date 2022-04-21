#include<bits/stdc++.h>
using namespace std;



int firstOcc(int *arr,int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}

int lastOcc(int *arr,int n,int i,int key){

    if(i==n){
        return -1;
    }
    int restarray = lastOcc(arr,n,i+1,key);

    if(restarray != -1){
        return restarray;
    }

    if(arr[i]==key){
        return i;
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;
    cout << firstOcc(arr,n,0,key) << " " << lastOcc(arr,n,0,key) << endl;; 
    return 0;
}
