#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] + h >= m*k)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return false;
}