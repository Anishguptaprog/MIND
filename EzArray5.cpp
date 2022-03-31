#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{	int arr[]={1,2,3,4,5};
	int a[]={1,2,3};
	set<int>s;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		s.insert(arr[i]);
	}
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		s.insert(a[i]);
	}
	cout<<s.size();

return 0;
}
