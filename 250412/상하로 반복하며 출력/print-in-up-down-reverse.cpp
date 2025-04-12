#include <iostream>
using namespace std;

int main() {
    int arr[10][10];
    int N;
    cin>>N;

    for (int c=0;c<N;c++) {
        if (c%2==0) {
            for (int r=0;r<N;r++) {
                arr[r][c] = r+1;
            }
        }
        else {
            int num = 1;
            for (int r=N-1;r>=0;r--) {
                arr[r][c] = num;
                num++;
            }
        }
    }

    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}