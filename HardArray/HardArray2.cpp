#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{	int n;
	cin>>n;
	int arr[n];
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{	cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<((arr[n-1]-k)-(arr[0]+k));


return 0;
}
