#include <iostream>
#include <string>
using namespace std;

int main(){

    int* dynamicInt = new int;
    string* dynamicStr = new string;

    cout <<"Assign  a value to the dynamically allocated integer: ";
    cin >> *dynamicInt;
    cout <<"Assign a value to the dynamically allocated string: ";
    cin >> *dynamicStr;

    cout << "\nThe value for the dynamically allocated integer: " << *dynamicInt << endl;
    cout << "The value for the dynamically allocated string: " << *dynamicStr << endl;

    delete dynamicInt;
    delete dynamicStr;

    dynamicInt = nullptr;
    dynamicStr = nullptr;

    return 0;
}