#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> b(n);
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                b[i] = a[l++];
            } else {
                b[i] = a[r--];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
