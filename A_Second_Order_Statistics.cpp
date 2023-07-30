#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int second = -1;
    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i - 1]) {
            second = nums[i];
            break;
        }
    }

    if (second != -1) {
        cout << second <<endl;
    } else {
        cout << "NO" <<endl;
    }

    return 0;
}