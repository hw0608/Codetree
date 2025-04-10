#include <iostream>
using namespace std;

int arr[105];

int main() {
    int N;
    cin>>N;

    for (int i=0;i<N;i++) {
            cin>>arr[i];
    }

    for (int i=0;i<N;i++) {
        cout << arr[i] *arr[i] << ' ';
    }
    return 0;
}