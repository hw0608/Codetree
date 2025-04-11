#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    int tmp = 0;
    for (int i=1;i<=100;i++) {
tmp += i;
if (tmp >= N) {
cout << i;
break;
}
    }
    return 0;
}