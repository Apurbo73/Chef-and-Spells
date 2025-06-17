#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        int maxHP = max(A + B, max(A + C, B + C));
        cout << maxHP << endl;
    }
    return 0;
}