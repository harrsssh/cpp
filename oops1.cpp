#include<bits/stdc++.h>
using namespace std;

class oops1
{
private:
    
public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout << "name: ";
        cin >> arr[i].name;
        cout << "age: ";
        cin >> arr[i].age;
        cout << "gender: ";
        cin >> arr[i].gender;
    }
};

int main(int argc, char const *argv[])
{
    oops1 arr[3];
    for(int i=0; i<3; i++){
        cout << "name: ";
        cin >> arr[i].name;
        cout << "age: ";
        cin >> arr[i].age;
        cout << "gender: ";
        cin >> arr[i].gender;
    }

    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }
    return 0;
}
