#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int Y = 0, M = 0;
    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        Y += (t / 30 + 1) * 10;
        M += (t / 60 + 1) * 15;
    }

    if (Y > M)
        cout << "M " << M;
    else if (Y < M)
        cout << "Y " << Y;
    else
        cout << "Y M " << Y;

    return 0;
}
