#include <iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    cout << str.substr(0, 1) << 'a' << str.substr(2, str.length()-4) << 'a' << str.substr(str.length()-1,1);

    return 0;
}