#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << (A >= B ? 1 : 0) << '\n';
    cout << (A > B ? 1 : 0) << '\n';
    cout << (A <= B ? 1 : 0) << '\n';
    cout << (A < B ? 1 : 0) << '\n';
    cout << (A == B ? 1 : 0) << '\n';
    cout << (A != B ? 1 : 0) << '\n';

    return 0;
}