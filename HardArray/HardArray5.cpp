#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{
	int arr[]={7,1,5,3,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int maxi=INT_MAX;
	int profit=0,diff=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<maxi)
			maxi=arr[i];
		diff=arr[i]-maxi;
		if(profit<diff)
		{
			profit=diff;
		}
		
	}
	cout<<profit<<endl;

return 0;
}
