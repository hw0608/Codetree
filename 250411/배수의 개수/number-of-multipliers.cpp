#include <iostream>
using namespace std;

int main() {
    int arr[10];

    int three = 0;
    int five = 0;

    for (int i=0;i<10;i++) {
        cin>>arr[i];
        if (arr[i] % 3 ==0) three++;
        if (arr[i] % 5 == 0) five++;
    }

    cout << three << " " << five;
    return 0;
}