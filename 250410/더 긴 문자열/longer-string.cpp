#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin>>str1>>str2;

    if (str1.length() == str2.length()) {
        cout << "same";
    }
    else if (str1.length() > str2.length()) {
        cout << str1 << " " << str1.length();
    }
    else {
        cout << str2 << " " << str2.length();
    }
    return 0;
}