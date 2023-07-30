#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int b, c, h;
        cin>>b>>c>>h;
        if((c+h+1) <= b)
        {
            cout<<2*(c+h)+1<<"\n";
        }
        else
        {
            if(b<1)
                cout<<0<<"\n";
            else if (b == 1)
            {
                cout<<2<<"\n";
            }
            else
            {
                cout<<b+(b-1)<<"\n";
            }
        }
    }
    return 0;
}