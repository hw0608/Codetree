#include <iostream>
using namespace std;

int main() {
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    string c;
    cin>>c;

    int cnt = 0;

    for (int i=0;i<5;i++) {
        if (str[i].substr(2, 1) == c || str[i].substr(3,1) == c) {
            cout << str[i] << '\n';
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}