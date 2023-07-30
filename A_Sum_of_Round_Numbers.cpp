#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> h;
        int n, count = 0;
        cin>>n;
        if(n%10 != 0){h.push_back(n%10);}
        int ans = n % 10;
        n -= ans;
        if(n%100 != 0){h.push_back(n%100);}
        ans = n%100;
        n -= ans;
        if(n%1000 != 0){h.push_back(n%1000);}
        ans = n % 1000;
        n -= ans;
        if(n%10000 != 0){h.push_back(n%10000);}
        if(n >= 10000 && n%10000 == 0){h.push_back(n);}
        cout<<h.size()<<"\n";
        for (int i = 0; i < h.size(); i++)
        {
            cout<<h[i]<<" ";
        }
        
    }
    
}