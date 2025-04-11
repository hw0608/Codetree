#include <iostream>
using namespace std;

int main() {
    while (true) {
        int num;
        cin>>num;

        if (num == 25) {
            cout << "Good";
            break;
        }
        else if (num > 25) {
            cout << "Lower\n";
        }
        else {
            cout << "Higher\n";
        }
    }
    return 0;
}