#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin>>A>>B;

    int num = A;
    while (num <= B) {
        cout << num << " ";
        if (num % 2 == 0) {
            num += 3;
        }
        else {
            num *= 2;
        }
    }
    return 0;
}