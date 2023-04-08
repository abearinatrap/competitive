#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n, int a[]) {
    sort(a, a + n, greater<int>());
    int total_strength = 0;
    for (int i = 0; i < n; i++) {
        if (total_strength > a[i]) {
            return i;
        }
        total_strength += a[i];
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve(n, a) << endl;
    return 0;
}
