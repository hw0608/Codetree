#include <iostream>
using namespace std;

int dp[15];

int main() {
    cin>>dp[0] >> dp[1];

    for (int i=2;i<10;i++) {
        int tmp = dp[i-2]+dp[i-1];
        dp[i] = tmp % 10;

    }

for (int i=0;i<10;i++) {
    cout << dp[i] << ' ';
}
    return 0;
}