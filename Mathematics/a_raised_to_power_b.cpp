#include <bits/stdc++.h>
using namespace std;
// Notes: Mathematics/a^bNotes.jpg
int main() {
    long long a, b;
    cin >> a >> b;

    long long result = 1;

    while (b > 0) {
        if (b % 2 != 0) {
            result = result * a;
            b = b - 1;
        }
        b = b / 2;
        a = a * a;
    }

    cout << result;

    return 0;
}
