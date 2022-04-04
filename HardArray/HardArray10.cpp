#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{	int a[]={3,1,2,2,1,2,3,3};
	int n=sizeof(a)/sizeof(a[0]);
//	cin>>n;
	int k=4;
	set<int>s;
//	cin>>k;
//	int a[n];
//	for(int i=0;i<n;i++)
//	{	cin>>a[i];
//	}
	map<int,int>mp;
	for(auto i:a)
	{	mp[i]++;
	}
	for(auto i:mp)
	
	{	if(i.second>(n/k))
		
		cout<<i.first<<" ";
	}
//	for(auto j:s)
//		cout<<j;


return 0;
}
