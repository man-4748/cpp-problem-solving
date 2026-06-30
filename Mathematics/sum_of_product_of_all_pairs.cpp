#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    long long sum_of_squares = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sum += x;
        sum_of_squares += x * x;
    }

    cout << "Sum of product of all possible pairs: "
         << (sum * sum - sum_of_squares) / 2;

    return 0;
}
