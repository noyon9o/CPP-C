#include<iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
       long long x;
       int count = 0;
    //    scanf("%lld", &x);
       cin>>x;
       for (int i = 1; i <= x; i++)
       {
            if (x % i == 0)
            {
                count++;
            }
       }
       if (count == 3)
       {
            cout<<"YES"<<endl;
            // printf("YES\n");
       }
       else
       {
            cout<<"NO"<<endl;
            // printf("NO\n");
       }
    }
    return 0;
}