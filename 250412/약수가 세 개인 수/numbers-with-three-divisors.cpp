#include <iostream>
using namespace std;

int divisorCount(int n) {
    int count = 0;
    for (int i=1;i*2<=n;i++) {
        if (n%i==0) count++;
    }
    return count+1;
}

int main() {
    int start, end;
    cin>>start >> end;

    int count = 0;

    for (int i=start;i<=end;i++) {
        if (divisorCount(i) == 3) count++;
    }

    cout << count;

    return 0;
}