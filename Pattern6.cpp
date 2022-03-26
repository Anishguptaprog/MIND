#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<(n/2+1);i++)
    {
        for(int space=0;space<=n/2-i;space++)
        {
            cout<<" ";
        }
        int j=0;
        for(;j<i;j++)
        {
            cout<<j+i<<" ";
        }
        j+=i-2;
        for(;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=n/2;i>=1;i--)
    {
        for(int space=0;space<=(n/2-i);space++)
        {
            cout<<" ";
        }
        int j=0;
        for(;j<i;j++)
        {
            cout<<j+i<<" ";
        }
        j+=i-2;
        for(;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
