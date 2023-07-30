#include<iostream>

using namespace std;

int main(void)
{
    int t, x;
    cin>>t;
    while (t--)
    {
        cin>>x;
        if (x >= 1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if (x >= 1600 && x <= 1899)
        {
            /* code 1600≤rating≤1899*/
            cout<<"Division 2"<<endl;
        }
        else if (x >= 1400 && x <= 1599)
        {
            /* code 1400≤rating≤1599*/
            cout<<"Division 3"<<endl;
        }
        else if (x <= 1399)
        {
            /* code */
            cout<<"Division 4"<<endl;
        }
        
    }
    
    return 0;
}