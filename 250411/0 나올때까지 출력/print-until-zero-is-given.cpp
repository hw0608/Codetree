#include <iostream>
using namespace std;

int main() {
    while (true) {
        int num;
        cin>>num;

        if (num == 0) {
            break;
        }
        cout << num << '\n';
    }
    return 0;
}