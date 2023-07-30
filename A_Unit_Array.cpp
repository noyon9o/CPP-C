#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minOperations(vector<int>& a) {
    int n = a.size();
    int negatives = 0;
    int positives = 0;
    int operations = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            negatives++;
        } else {
            positives++;
        }
    }

    if (positives == 0) {
        return negatives;
    }

    if (negatives == 0) {
        return 0;
    }

    if (negatives > positives) {
        operations = positives;
    } else {
        operations = negatives;
    }

    return operations;
}

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

        int result = minOperations(a);
        cout << result << endl;
    }

    return 0;
}
