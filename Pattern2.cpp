#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{	ll n,k;
	cin>>n;
	for(int i=n/2;i>-(n/2)-1;i--)
	{	if(i<0)
		k=i*-1;
		else
		k=i;
		for(int j=0;j<=k;j++)
		{	cout<<"*";
		}
		for(int j=0;j<n-2*k;j++)
		{	cout<<" ";
		}
		for(int j=0;j<=k;j++)
		{	cout<<"*";
		}
		cout<<endl;
	}


return 0;
}
